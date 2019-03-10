/*
 * ringbuffer.h
 *
 *  Created on: 2019/03/08
 *      Author: AshGarden
 */

#ifndef RINGBUFFER_H_
#define RINGBUFFER_H_

#include <stdint.h>
#include <stdbool.h>

#ifndef MAX_COUNT_RINGBUFF_OBJ
#define	MAX_COUNT_RINGBUFF_OBJ	10
typedef int RINGBUFF_OBJ_T;
uint32_t	write_index = 0;
uint32_t	read_index =0;
RINGBUFF_OBJ_T	RingObj[MAX_COUNT_RINGBUFF_OBJ];
#endif

static inline void WriteRB(RINGBUFF_OBJ_T	obj)
{

	RingObj[write_index] = obj;
	write_index = (write_index +1) % MAX_COUNT_RINGBUFF_OBJ;
}

static inline bool ReadRB(RINGBUFF_OBJ_T*	obj)
{
	if( write_index != read_index )
	{
		*obj = RingObj[read_index];
		read_index = (read_index +1) % MAX_COUNT_RINGBUFF_OBJ;
		return true;
	}
	else{
		return false;
	}
}


#endif /* RINGBUFFER_H_ */
