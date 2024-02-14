#include<stdio.h>
int power(int n, int pow);

int main()
{
	int n;
	int pow;
	int result=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("Enter the power:\n");
	scanf("%d",&pow);
	result=power(n,pow);
	printf("The power of %d to the %d is %d \n",n,pow,result);
}

int power(int n, int pow)
{
	if(pow==0)
	{
		return 1;
	}
	else
	{
		return n*power(n,pow-1);
	}
}

