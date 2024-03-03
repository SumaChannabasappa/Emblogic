/* Progrma to check the processor endiannes */

#include<stdio.h>
#include<stdint.h>
int main(void)
{
	uint32_t data;
	uint8_t *cptr;
	data=1;
	cptr=(uint8_t*)&data; //type cast
		if(*cptr==1)
		{
			printf("littel-endiann");
		}
		else if(*cptr==0)
		{
			printf("big-endiann");
		}
	return 0;
}
