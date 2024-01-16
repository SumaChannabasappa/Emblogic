/* Write a program to copy one elements array to another elements*/

#include<stdio.h>
int main()
{
 int i,n;
 printf("Enter the number of elements in the array:\n");
 scanf("%d",&n);
 int a[n],b[i];
 printf("Enter the elements of array:\n");
 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
	 b[i]=a[i];
	 printf("%d\n",b[i]);
 }
}
