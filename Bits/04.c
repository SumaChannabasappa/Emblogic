/* program to find whether a number is an exact power of 2*/

#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
		printf("The number is power of 2\n");
	else
		printf("The number is not power of 2\n");
	return 0;
}
