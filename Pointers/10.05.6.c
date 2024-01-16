/* Write a program to insert an element in an array at nth location*/

#include<stdio.h>
int main()
{

 int i,n;
 int pos,val;
 printf("Enter the number of elements in the array:\n");
 scanf("%d",&n);
 int a[n];
 printf("Enter the elemts in the array:\n");
 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);

 printf("enter the position of the array:\n");
 scanf("%d",&pos);

 printf("Enter the element:\n");
 scanf("%d",&val);
 
 for(i=n-1;i>=pos-1;i--)
  a[i+1]=a[i];

   a[pos-1]=val;

   for(i=0;i<=n;i++)
	   printf("The new array elements are %d\n",a[i]);
}
