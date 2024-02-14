#include<stdio.h>
void natural(int n);

int main()
{
	int n;
	printf("Enter the number that you want find natural number:\n");
	scanf("%d",&n);
	natural(n);

}

void natural(int n)
{
	if(n)
	{
		natural(n-1);
	}
	else
	{
		return;
	}
	printf("The natural numbers are %d \n",n);


}

