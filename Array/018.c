/* Program to insert an item in an array at specified index by moving other elements to the right */

#include<stdio.h>
#define num 10

int main()
{
	int n,arr[num],i,index;
	printf("Enter the elements:\n");
	for(i=0;i<num-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the new element that you want to insert:\n");
	scanf("%d",&n);
	printf("Enter the position that you want to insert:\n");
	scanf("%d",&index);


	for(i=num-2;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[i+1]=n;
	for(i=0;i<num;i++)
		printf("%d",arr[i]);
	printf("\n");
	return 0;
}
