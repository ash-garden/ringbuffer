/*
 * ringchar.c
 *
 *  Created on: 2019/03/10
 *      Author: AshGarden
 */


#include <stdint.h>

#include "ringchar.h"
#define	MAX_COUNT_RINGBUFF_OBJ	10
typedef MyString RINGBUFF_OBJ_T;
static uint32_t	write_index = 0;
static uint32_t	read_index =0;
static RINGBUFF_OBJ_T	RingObj[MAX_COUNT_RINGBUFF_OBJ];
#include "ringbuffer.h"


void strrb_write( MyString obj)
{
	WriteRB(obj);
}

bool strrb_read( MyString* obj)
{
	return( ReadRB(obj));
}
