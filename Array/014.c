/* Write a program which finds the samllest element of the array and swaps it with the 0th element of the array */

#include<stdio.h>
#define Max 50

int main()
{
	int num,arr[Max],i,j,temp,min;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	printf("Enter the elements:\n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	min=0;
	for(j=1;j<num;j++)
	{
		if(arr[min]>arr[j])
			min=j;
	}
	if(min!=0)
	{
		temp=arr[0];
		arr[0]=arr[min];
		arr[min]=temp;
	}
	for(i=0;i<num;i++)
		printf("%d",arr[i]);
	printf("\n");
	return 0;
}
