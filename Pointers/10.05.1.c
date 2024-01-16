/* Write a program to print all negative elements in an array*/

#include<stdio.h>
int main()
{
	int i;
	int a[10]={1,-4,5,6,-7,-3,9,10,-17,3};
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
			printf("%d\n",a[i]);
	}

}
