/* Write a program to maipulate n numbers of bits in x number starting from position p*/

#include<stdio.h>

int main()
{

	int x,p,n,clear,i;
	printf("Enter the number:");
	scanf("%d",&x);
	printf("Enter the starting position:");
	scanf("%d",&p);
	printf("Enter the number of bits:");
	scanf("%d",&n);
	int mask=(~0<<n);

	clear=x&~mask;
	printf("The clear bit  number is %d\n", clear);

	x=clear;
	//printf("The X number %d",x);

		for(i=7;i>=0;i--)
		{
			int mask=1<<i;
			printf("%c",(x&mask)?'1':'0');
		}
	return 0;

}
