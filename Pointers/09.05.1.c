/* Write a program to accept element into an array of size 10, then display the element*/

#include<stdio.h>
int main()
{
	int a[10],i,j;
	printf("Enter the array elements:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		printf("The array elements are %d\n",a[i]);
}
