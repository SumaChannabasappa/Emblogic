/* Program to insert an item in sorted array at proper place */

#include<stdio.h>
#define num 10

int main()
{
	int n,arr[num],i;
	printf("Enter the elements:\n");
	for(i=0;i<num-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the new element that you want to insert:\n");
	scanf("%d",&n);

	for(i=num-2;n<arr[i] && i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[i+1]=n;
	for(i=0;i<num;i++)
		printf("%d",arr[i]);
	printf("\n");
	return 0;
}
