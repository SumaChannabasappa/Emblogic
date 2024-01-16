/* Write a program to find sum of all array elements*/

#include<stdio.h>
int main()
{
	int sum=0;
	int i,a[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum is %d\n",sum);
}
