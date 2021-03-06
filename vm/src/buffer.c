#include "std.h"
#include "lpc_incl.h"
#include "stralloc.h"

#ifdef BUFFER_STATS

int bytes_distinct_buffers = 0;

#define SUB_BUFFER(size) bytes_distinct_buffers -= size;
#define ADD_BUFFER(size) bytes_distinct_buffers += size;

#else
#define SUB_BUFFER(size) 
#define ADD_BUFFER(size) 
#endif



buffer_t null_buf = 
{
	1,  /* Ref count, which will ensure that it will
	 * never be deallocated */
	0,  /* size */
	#ifdef DEBUG
		0, 
	#endif 
	{
		0
	}

	, 
};

INLINE buffer_t *null_buffer()
{
	null_buf.ref++;
	return  &null_buf;
} /* null_buffer() */

void free_buffer(buffer_t *b)
{
	b->ref--;
	/* don't try to free the null_buffer (ref count might overflow) */
	if ( (b->ref > 0) || (b ==  &null_buf) )
	{
		return ;
	}
    SUB_BUFFER(b->size);
	FREE( (char*)b);
} /* free_buffer() */

buffer_t *allocate_buffer(int size)
{
	buffer_t *buf;

	#ifndef DISALLOW_BUFFER_TYPE
		if ( (size < 0) || (size > max_buffer_size) )
		{
			error("Illegal buffer size.\n");
		}
		if (size == 0)
		{
			return null_buffer();
		}
		/* using calloc() so that memory will be zero'd out when allocated */
		buf = (buffer_t*)DCALLOC(sizeof(buffer_t) + size - 1, 1, TAG_BUFFER, "allocate_buffer");
		buf->size = size;
		buf->ref = 1;
        ADD_BUFFER(size);
		return buf;
	#else 
		return NULL;
	#endif 
}

//-------------------------------------------------------------------------
//
//-------------------------------------------------------------------------

int write_buffer(buffer_t *buf, int start, char *str, int theLength)
{
	int size;

	size = buf->size;
	if (start < 0)
	{
		start = size + start;
		if (start < 0)
		{
			return 0;
		}
	}
	/*
	 * can't write past the end of the buffer since we can't reallocate the
	 * buffer here (no easy way to propagate back the changes to the caller
	 */
	if ( (start + theLength) > size)
	{
		return 0;
	}
	memcpy(buf->item + start, str, theLength);
	return 1;
} /* write_buffer() */

char *read_buffer(buffer_t *b, int start, int len, int *rlen)
{
	char *str;
	unsigned int size;

	if (len < 0)
	{
		return 0;
	}

	size = b->size;
	if (start < 0)
	{
		start = size + start;
		if (start < 0)
		{
			return 0;
		}
	}
	if (len == 0)
	{
		len = size;
	}
	if (start >= (int)size)
	{
		return 0;
	}
	if ( (start + len) > (int)size)
	{
		len = (size - start);
	}
	for (str = (char*)b->item + start, size = 0;  *str && size < (unsigned)len; str++, size++)
		;
	str = new_string(size, "read_buffer: str");
	memcpy(str, b->item + start, size);
	str[ *rlen = size] = '\0';

	return str;
} /* read_buffer() */

int add_buffer_status(outbuffer_t *out, int verbose)
{
#ifdef BUFFER_STATS
    outbuf_addv(out, "All buffer:%7d\n", bytes_distinct_buffers);
    return bytes_distinct_buffers;
#else 
    return 0;
#endif

}
