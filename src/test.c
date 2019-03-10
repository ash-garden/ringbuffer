/*
 * test.c
 *
 *  Created on: 2019/03/08
 *      Author: AshGarden
 */

#include <stdio.h>
#include "ringint.h"
#include "ringchar.h"
#include "ringstruct.h"


int main(int argc, char **argv) {

	int i;
	MyString tmp;
	MyStruct st;

	for(i=0;i<3;i++)
	{
		intrb_write(i);
	}

	while(intrb_read(&i))
	{
		printf("%d\n",i);
	}

	for(i=100;i<103;i++)
	{
		sprintf(tmp.str,"%d",i);
		strrb_write(tmp);
	}

	while(strrb_read(&tmp))
	{
		printf("%s\n",tmp.str);
	}

	for(i=200;i<208;i++)
	{
		st.i = i;
		st.s = i*2;
		sprintf(&st.c,"%d",i*10);
		structrb_write(st);
	}

	while(structrb_read(&st))
	{
		printf("i=%d\n",st.i);
		printf("s=%d\n",st.s);
		printf("c=%s\n",st.c);
	}

}

