/*
 * ringstruct.h
 *
 *  Created on: 2019/03/10
 *      Author: AshGarden
 */

#ifndef RINGSTRUCT_H_
#define RINGSTRUCT_H_
#include <stdbool.h>

typedef struct
{
	int 	i;
	char	c[10];
	short	s;
}MyStruct;

extern void structrb_write( MyStruct obj);
extern bool structrb_read(  MyStruct* obj);


#endif /* RINGSTRUCT_H_ */
