#include<stdio.h>
int natural(int n);

int main()
{
	int n;
	int sum=0;
	printf("Enter the number that you want find natural number:\n");
	scanf("%d",&n);
	sum=natural(n);
    printf("The sum of natural number is %d",sum);
}

int natural(int n)
{
	if(n)
	{
		return n+natural(n-1);
	}
	else
	{
		return 0;
	}
    
   
}

