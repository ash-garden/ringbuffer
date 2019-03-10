/*
 * ringint.c
 *
 *  Created on: 2019/03/10
 *      Author: AshGarden
 */
#include <stdint.h>

#include "ringint.h"
#define	MAX_COUNT_RINGBUFF_OBJ	10
typedef int RINGBUFF_OBJ_T;
static uint32_t	write_index = 0;
static uint32_t	read_index =0;
static RINGBUFF_OBJ_T	RingObj[MAX_COUNT_RINGBUFF_OBJ];
#include "ringbuffer.h"


void intrb_write( int obj)
{
	WriteRB(obj);
}

bool intrb_read( int* obj)
{
	return( ReadRB(obj));
}
