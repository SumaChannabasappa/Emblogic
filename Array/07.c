/* Program to pass array elements to the function*/

#include<stdio.h>
void check(int num);
int main(void)
{
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		check(arr[i]);
	}
	return 0;
}

void check(int num)
{
	if(num%2==0)
		printf("%d is even number\n",num);
	else
	printf("%d is Odd number\n",num);
}
