/* Program to find smallest and largest elements of the array*/

#include<stdio.h>

int main(void)
{
	int large,small,arr[5],i;
	small,large=arr[0];
	for(i=0;i<5;i++)
	{
		printf("Enter the value of the array arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("The array elements are\n");
	for(i=0;i<5;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	for(i=1;i<5;i++)
	{
		if(arr[i]<small)
			small=arr[i];
		if(arr[i]>large)
			large=arr[i];
	}
	printf("The count of small and large element in the array is %d and %d\n",small,large);

	return 0;
}
