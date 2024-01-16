/* Write a program to check array bounds while inputting elements into the array */

#include<stdio.h>
#define SIZE 5

int main()
{

	int a[5],i,n;
	printf("Enter the elements in the array:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		printf("a[%d]=%d\n",i,a[i]);
	printf("Enter the limit of the array:\n");
	scanf("%d",&n);
	printf("The elements are:\n");
	for(i=0;i<n;i++)
		printf("a[%d]=%d\n",i,a[i]);
}
