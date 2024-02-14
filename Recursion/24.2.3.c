#include<stdio.h>
void OddEven(int n);

int main()
{
	int n;
	printf("Enter the range that you want find Odd/Even number:\n");
	scanf("%d",&n);
	OddEven(n);

}

void OddEven(int n)
{

	if(n)
	{
		OddEven(n-1);
		if(n%2==0)
		  printf("The number is even number %d\n",n);
		else
		  printf("The number is Odd number %d\n",n);

	}

	else
	{
		return;
	}


}

