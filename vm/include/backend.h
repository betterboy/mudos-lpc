#ifndef BACKEND_H
	#define BACKEND_H

	#include "interpret.h"

	#define NULL_ERROR_CONTEXT       0
	#define NORMAL_ERROR_CONTEXT     1
	#define CATCH_ERROR_CONTEXT      2
	#define SAFE_APPLY_ERROR_CONTEXT 4

	/*
	 * backend.c
	 */
	extern int current_time;
	extern int heart_beat_flag;
	extern object_t *current_heart_beat;
	extern int eval_cost;
	extern int message_shut_down;
	extern error_context_t *current_error_context;
	extern int forbid_login_flag;
	extern int internal_server;

	void call_heart_beat();
	void backend(void);
	void clear_state(void);
	void logon(object_t*);
	int parse_command(char *, object_t*);
	int set_heart_beat(object_t *, int);
	int query_heart_beat(object_t*);
	int heart_beat_status(outbuffer_t *, int);
void remove_destructed_objects(void);
	void update_load_av(void);
	void update_compile_av(int);
	char *query_load_av(void);
	array_t *get_heart_beats(void);

#endif
