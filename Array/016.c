/* Program scans one dimensional array from left to right */

#include<stdio.h>
#define Max 50

int main()
{
	int num,arr[Max],i,j,temp;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	printf("Enter the elements:\n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	for(j=0;j<num-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	for(i=0;i<num;i++)
		printf("%d",arr[i]);
	printf("\n");
	return 0;
}
