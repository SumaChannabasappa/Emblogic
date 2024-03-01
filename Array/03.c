/* Program to count even and odd elements of the array*/

#include<stdio.h>

int main(void)
{
	int arr[5],i,ecount=0,ocount=0;
	for(i=0;i<5;i++)
	{
		printf("Enter the value of the array arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("The array elements are\n");
	for(i=0;i<5;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
			ecount++;
		else
			ocount++;
	}
	printf("The count of even and odd elements in the array is %d and %d\n",ecount,ocount);

	return 0;
}
