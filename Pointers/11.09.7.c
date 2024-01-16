/* Write a C program tp cyclically permute the elements of an attay */

#include<stdio.h>
#define SIZE 100
int main()
{
	
	int n,i,j,temp;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
#define SIZE n
	printf("SIZE IS %d\n",SIZE);
	int a[n];
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	a[n]=a[0];
	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n;i++)
		printf("The elements are: %d\n",a[i]);
}
