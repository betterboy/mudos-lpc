/*
efunctions.c: this file contains the efunctions called from
inside eval_instruction() in interpret.c.  Note: if you are adding
local efunctions that are specific to your driver, you would be better
off adding them to a separate source file.  Doing so will make it much
easier for you to upgrade (won't have to patch this file).  Be sure
to #include "lpc_incl.h" in that separate source file.
 */

#include "std.h"
#include "lpc_incl.h"
#include "file_incl.h"
#include "debug.h"
#include "lint.h"
#include "include/localtime.h"
#include "port.h"
#include "crypt.h"

/* get a value for CLK_TCK for use by times() */
#if (defined(TIMES) && !defined(RUSAGE))
	/* this may need #ifdef'd to handle different types of machines */
	#include <limits.h>
#endif 

#ifdef F_LOCALTIME
	/* FIXME: most of the #ifdefs here should be based on configure checks
	instead.  Same for rusage() */
	void f_localtime(void)
	{
		struct tm *tm;
		array_t *vec;
		time_t lt;

		#ifdef sequent
			struct timezone tz;
		#endif 

		lt = sp->u.number;
		tm = localtime(&lt);

		vec = allocate_empty_array(10);
		vec->item[LT_SEC].type = T_NUMBER;
		vec->item[LT_SEC].u.number = tm->tm_sec;
		vec->item[LT_MIN].type = T_NUMBER;
		vec->item[LT_MIN].u.number = tm->tm_min;
		vec->item[LT_HOUR].type = T_NUMBER;
		vec->item[LT_HOUR].u.number = tm->tm_hour;
		vec->item[LT_MDAY].type = T_NUMBER;
		vec->item[LT_MDAY].u.number = tm->tm_mday;
		vec->item[LT_MON].type = T_NUMBER;
		vec->item[LT_MON].u.number = tm->tm_mon;
		vec->item[LT_YEAR].type = T_NUMBER;
		vec->item[LT_YEAR].u.number = tm->tm_year + 1900;
		vec->item[LT_WDAY].type = T_NUMBER;
		vec->item[LT_WDAY].u.number = tm->tm_wday;
		vec->item[LT_YDAY].type = T_NUMBER;
		vec->item[LT_YDAY].u.number = tm->tm_yday;
		vec->item[LT_GMTOFF].type = T_NUMBER;
		//vec->item[LT_ZONE].type = T_STRING;

		/* 4.2 BSD doesn't seem to provide any way to get these last two values */
		vec->item[LT_GMTOFF].u.number = 0;
		vec->item[LT_ZONE].type = T_NUMBER;
		vec->item[LT_ZONE].u.number = 0;

		put_array(vec); 
	}
#endif 

#ifdef F_RUSAGE
	#ifdef WIN32
		void f_rusage(void)
		{

			error("QTZ_ServerEngine:Functi do not supported under Windows.\n"); 
		}
	#else 

		#ifdef RUSAGE
			void f_rusage(void)
			{
				struct rusage rus; mapping_t *m; long usertime, stime; int maxrss; 

				if (getrusage(RUSAGE_SELF, &rus) < 0)
				{
					m = allocate_mapping(0); 
				} 
				else
				{
					#if 1 /* Was !SunOS_5 */
						usertime = rus.ru_utime.tv_sec * 1000+rus.ru_utime.tv_usec / 1000; stime = rus.ru_stime.tv_sec * 1000+rus.ru_stime.tv_usec / 1000; 
					#else 
						usertime = rus.ru_utime.tv_sec * 1000+rus.ru_utime.tv_nsec / 1000000; stime = rus.ru_stime.tv_sec * 1000+rus.ru_stime.tv_nsec / 1000000; 
					#endif 
					maxrss = rus.ru_maxrss; 
					#ifdef sun
						maxrss *= getpagesize() / 1024; 
					#endif 
					m = allocate_mapping(16); add_mapping_pair(m, "utime", usertime); add_mapping_pair(m, "stime", stime); add_mapping_pair(m, "maxrss", maxrss); add_mapping_pair(m, "ixrss", rus.ru_ixrss);
  						add_mapping_pair(m, "idrss", rus.ru_idrss); add_mapping_pair(m, "isrss", rus.ru_isrss); add_mapping_pair(m, "minflt", rus.ru_minflt); add_mapping_pair(m, "majflt",
  						rus.ru_majflt); add_mapping_pair(m, "nswap", rus.ru_nswap); add_mapping_pair(m, "inblock", rus.ru_inblock); add_mapping_pair(m, "oublock", rus.ru_oublock); add_mapping_pair
  						(m, "msgsnd", rus.ru_msgsnd); add_mapping_pair(m, "msgrcv", rus.ru_msgrcv); add_mapping_pair(m, "nsignals", rus.ru_nsignals); add_mapping_pair(m, "nvcsw", rus.ru_nvcsw);
  						add_mapping_pair(m, "nivcsw", rus.ru_nivcsw); 
				}
				push_refed_mapping(m); 
			}
		#else 

			#ifdef GET_PROCESS_STATS
				void f_rusage(void)
				{
					struct process_stats ps; mapping_t *m; int utime, stime, maxrss; 

					if (get_process_stats(NULL, PS_SELF, &ps, NULL) ==  - 1)m = allocate_mapping(0); 
					else
					{
						utime = ps.ps_utime.tv_sec * 1000+ps.ps_utime.tv_usec / 1000; stime = ps.ps_stime.tv_sec * 1000+ps.ps_stime.tv_usec / 1000; maxrss = ps.ps_maxrss * getpagesize() / 1024; 

						m = allocate_mapping(19); add_mapping_pair(m, "utime", utime); add_mapping_pair(m, "stime", stime); add_mapping_pair(m, "maxrss", maxrss); add_mapping_pair(m, "pagein", ps.ps_pagein);
   						add_mapping_pair(m, "reclaim", ps.ps_reclaim); add_mapping_pair(m, "zerofill", ps.ps_zerofill); add_mapping_pair(m, "pffincr", ps.ps_pffincr); add_mapping_pair(m, "pffdecr",
   						ps.ps_pffdecr); add_mapping_pair(m, "swap", ps.ps_swap); add_mapping_pair(m, "syscall", ps.ps_syscall); add_mapping_pair(m, "volcsw", ps.ps_volcsw); add_mapping_pair(m, 
   						"involcsw", ps.ps_involcsw); add_mapping_pair(m, "signal", ps.ps_signal); add_mapping_pair(m, "lread", ps.ps_lread); add_mapping_pair(m, "lwrite", ps.ps_lwrite);
   						add_mapping_pair(m, "bread", ps.ps_bread); add_mapping_pair(m, "bwrite", ps.ps_bwrite); add_mapping_pair(m, "phread", ps.ps_phread); add_mapping_pair(m, "phwrite",
   						ps.ps_phwrite); 
					} push_refed_mapping(m); 
				}
			#else 

				#ifdef TIMES			/* has times() but not getrusage() */

					/*
					warning times are reported in processor dependent units of time.
					see man pages for 'times' to figure out how long a tick is on your system.
					 */

					void f_rusage(void)
					{
						mapping_t *m; struct tms t; 

						times(&t); m = allocate_mapping(2); add_mapping_pair(m, "utime", t.tms_utime *1000 / CLK_TCK); add_mapping_pair(m, "stime", t.tms_stime *1000 / CLK_TCK); push_refed_mapping(m); 
					}

				#else 

					#ifdef LATTICE

						void f_rusage(void)
						{
							mapping_t *m; int i; unsigned int clock[2]; 

							i = timer(clock);  /* returns 0 if success, -1 otherwise */
							m = allocate_mapping(2); add_mapping_pair(m, "utime", i ? 0 : clock[0] *1000+clock[1] / 1000); add_mapping_pair(m, "stime", i ? 0 : clock[0] *1000+clock[1] / 1000); push_refed_mapping(m); 
						} 

					#endif /* LATTICE */

				#endif /* TIMES */

			#endif /* GET_PROCESS_STATS */

		#endif /* RUSAGE */

	#endif /* WIN32 */

#endif 

#ifdef F_MALLOC_CHECK
	/* this efun only useful on the NeXT (func_spec.c has #ifdef NeXT).  A
	non-zero return value indicates that some memory corruption has occurred
	at some time prior to this calling of this efun.
	 */
	void f_malloc_check(void)
	{
		push_number(NXMallocCheck() ); 
	}
#endif 

#ifdef F_MALLOC_DEBUG
	/* NeXT specific efun for setting the debugging level of NeXT's built-in
	malloc.
	 */
	void f_malloc_debug(void)
	{
		int level; 

		level = sp->u.number; if (level < 0)
		{
			int rc; 

			rc = malloc_debug(0); malloc_singlethreaded(); sp->u.number = rc; 
		}
		else
		{
			sp->u.number = malloc_debug(level); 
		}
	}
#endif
