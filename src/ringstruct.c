/*
 * ringstruct.c
 *
 *  Created on: 2019/03/10
 *      Author: AshGarden
 */

#include <stdint.h>

#include "ringstruct.h"
#define	MAX_COUNT_RINGBUFF_OBJ	10
typedef MyStruct RINGBUFF_OBJ_T;
static uint32_t	write_index = 0;
static uint32_t	read_index =0;
static RINGBUFF_OBJ_T	RingObj[MAX_COUNT_RINGBUFF_OBJ];
#include "ringbuffer.h"



void structrb_write( MyStruct obj)
{
	WriteRB(obj);
}

bool structrb_read( MyStruct* obj)
{
	return( ReadRB(obj));
}

