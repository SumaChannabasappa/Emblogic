/* Program to add elements of the array*/

#include<stdio.h>

int main(void)
{
	int arr[5],i,sum=0;
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
		sum+=arr[i];
	printf("The sum of array is %d\n",sum);

	return 0;
}
