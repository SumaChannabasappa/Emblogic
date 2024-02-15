/* swap two values without using temp by using XOR*/

#include<stdio.h>

int main()
{

	int x,y;
	printf("Enter the x value\n");
	scanf("%d",&x);
	printf("Enter the y value\n");
    scanf("%d",&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("The x value is after swapping is %d\n",x);
	printf("The y value is after swapping is %d\n",y);
}
