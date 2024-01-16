/* Write a program to find largest element in array of size n.*/

#include<stdio.h>
int main()
{
 int a[10];
 int i;
 int large=a[0];
 printf("Enter the elments in the array:\n");
 for(i=0;i<10;i++)
	 scanf("%d",&a[i]);
 for(i=0;i<10;i++)
	 printf("%d",a[i]);
 for(i=0;i<10;i++)
 {
 if(large<a[i])
	 large=a[i];
 }
 printf("The large number is %d\n",large);

}
