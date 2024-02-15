/*Clear the rightmost bit */

#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	n=n&(n-1);
	printf("The number is %d\n",n);
}
