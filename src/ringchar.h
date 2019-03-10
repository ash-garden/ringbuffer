/*
 * ringchar.h
 *
 *  Created on: 2019/03/10
 *      Author: AshGarden
 */

#ifndef RINGCHAR_H_
#define RINGCHAR_H_
#include <stdbool.h>

typedef struct
{
	char str[100];
}MyString;

extern void strrb_write( MyString obj);
extern bool strrb_read( MyString* obj);


#endif /* RINGCHAR_H_ */
