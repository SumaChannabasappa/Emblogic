/* Write a program to delete am element from an array at specified position*/

#include<stdio.h>
int main()
{
	int i,n,pos;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Enter the position that you want to delete the number:\n");
	scanf("%d",&pos);

	for(i=pos-1;i<n-1;i++)
	   a[i]=a[i+1];
	//printf("%d\n",a[i-1]);
	for(i=0;i<n-1;i++)
	printf("The new array elements are:%d\n",a[i]);




}
