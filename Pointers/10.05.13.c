/* Write a program to find reverse of an array */

#include<stdio.h>
//#define SIZE(s) s
int main()
{
	int i,j=0,n;
	int a[100],temp,rev[100];
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
		printf("a[%d]=%d\n",i,a[i]);

	
	for(i=n-1;i>=0;i--)
	{
		rev[j]=a[i];
		j++;
	}
	printf("The reverse array elements are:\n");
	for(i=0;i<n;i++)	
	    printf("a[%d]=%d\n",i,rev[i]);	
	
	

}
