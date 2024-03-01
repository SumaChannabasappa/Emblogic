/* Merge Sort */

#include<stdio.h>
void merge(int arr1[],int arr2[],int arr3[],int n1,int n2);
#define Max 100

int main()
{
	int n,arr1[Max],arr2[Max],arr3[2*Max],i,num1,num2;
	printf("Enter the number of elements:\n");
	scanf("%d",&num1);
	printf("Enter the elements:\n");
	for(i=0;i<num1;i++)
	{
		scanf("%d",&arr1[i]);
	}

	printf("Enter the number of elements:\n");
	scanf("%d",&num2);
	printf("Enter the elements:\n");
	for(i=0;i<num2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	merge(arr1,arr2,arr3,num1,num2);
	for(i=0;i<num1+num2;i++)
		printf("%d",arr3[i]);
	printf("\n");
	return 0;
}

void merge(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
	int i,j,k;
	i=0;
	j=0;
	k=0;
	while((i<=n1-1)&&(j<=n2-1))
	{
		if(arr1[i]<arr2[j])
			arr3[k++]=arr1[i++];
		else
			arr3[k++]=arr2[j++];
	}
	while(i<=n1-1)
		arr3[k++]=arr1[i++];
	while(j<=n2-1)
		arr3[k++]=arr2[i++];
}
