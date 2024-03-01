/* Program to find binary of decimal using array*/

#include<stdio.h>

int main(void)
{
	int num,i=0,j,rem[100];
	printf("Enter the number\n");
	scanf("%d",&num);

	while(num!=0)
	{
		rem[i]=num%2;
		num=num/2;
		i++;
	}
	printf("The array elements are\n");
	for(i=3;i>=0;i--)
		printf("%d",rem[i]);
	printf("\n");

	return 0;
}
