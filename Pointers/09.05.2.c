/* Write a program to accept element into an array of size 10, then display the elements.*/

#include<stdio.h>
int main()
{
 int a[5]={1,2,3,4,5};
 int b[5]={1,2,3,4,5};
 int c[5],i;
 for(i=0;i<5;i++)
 {
   c[i]=a[i]+b[i];
   printf("%d\n",c[i]);
 }

}
