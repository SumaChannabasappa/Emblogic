/* Write a program to search for key value using linear search and give its location*/

#include<stdio.h>
int main()
{
 int n,keynum;
 int i,found=0;
 printf("Enter the number of elements in the array:\n");
 scanf("%d",&n);
 int a[n];
 printf("The elements of the array are:\n");
 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
 printf("Enter the key element to found:\n");
 scanf("%d",&keynum);
 for(i=i;i<n;i++)
 {
  if(keynum==a[i])
	  found=1;
      break;
 }
 if(found=1)
	 printf("The element found %d\n",keynum);
 else
	 printf("The element not found\n");

}

