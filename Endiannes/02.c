/* Program to convert little endian to big endian and big endian to littel endian */

#include<stdio.h>
#include<stdint.h>

//Function to change one endian to another
uint32_t ChangeEndianness(uint32_t u32Value)
{
	uint32_t u32Result=0;
	u32Result|=(u32Value & 0x000000FF)<<24;
	u32Result|=(u32Value & 0x0000FF00)<<8;
	u32Result|=(u32Value & 0x00FF0000)>>8;
	u32Result|=(u32Value & 0xFF000000)>>24;
	return u32Result;
}

int main()
{
	uint32_t u32CheckData=0x11223344;
	uint32_t u32ResultData=0;
	//swap the data
	u32ResultData=ChangeEndianness(u32CheckData);
	//converted data
	printf("0x%x\n",u32ResultData);
	return 0;
}
