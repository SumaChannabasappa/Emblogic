/* Insertion Sort */

#include<stdio.h>
#define Max 10

int main()
{
	int n,arr[Max],i,j,k,num;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);

	printf("Enter the elements:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=1;i<num;i++)
	{
		k=arr[i];
		for(j=i-1;k<arr[j] && j>=0;j--)
		{
			arr[j+1]=arr[j];
		}

		arr[j+1]=k;
	}
	for(i=0;i<num;i++)
		printf("%d",arr[i]);
	printf("\n");
	return 0;
}
