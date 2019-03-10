/*
 * ringint.h
 *
 *  Created on: 2019/03/10
 *      Author: AshGarden
 */

#ifndef RINGINT_H_
#define RINGINT_H_
#include <stdbool.h>

extern void intrb_write( int obj);
extern bool intrb_read( int* obj);

#endif /* RINGINT_H_ */
