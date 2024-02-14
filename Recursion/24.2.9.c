#include<stdio.h>
unsigned long fact(unsigned long int n);
int main()
{
	unsigned long n=0;
	unsigned result=0;
	printf("Enter a positive integer number:");
	scanf("%lu",&n);

	if(n<0)
	{
		printf("\nFactorial of negetive number does not exist \n");
	}
	else
	{
		result=fact(n);
		printf("\nThe factorial of %d is: %d.\n",n,result);
	}
	return 0;
}

unsigned long fact(unsigned long int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
}
