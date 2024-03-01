/* Program to reverse the elements of the array*/

#include<stdio.h>

int main(void)
{
	int arr[5],rev[5],i,j=0;
	for(i=0;i<5;i++)
	{
		printf("Enter the value of the array arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("The array elements are\n");
	for(i=0;i<5;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	for(i=4;i>=0;i--)
	{
		rev[j]=arr[i];
		j++;
	}

	printf("The reverse array elements are\n");
	for(i=0;i<5;i++)
		printf("%d\t",rev[i]);
	printf("\n");

	return 0;
}
