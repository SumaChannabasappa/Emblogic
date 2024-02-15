/* Find whether a number is even or odd */

#include<stdio.h>

int main()
{

	int num;
	int mask=0x1;//0001
	printf("Enter the number:");
	scanf("%d",&num);
	if((num&mask)==0)
		printf("The number is even number\n");
	else
		printf("The number is odd number\n");

}
