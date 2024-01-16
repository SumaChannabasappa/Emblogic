/* Write a C program to count total number of negative elements in an array */

#include<stdio.h>
int main()
{
 int i,Negcount=0;
 int a[10]={1,2,3,-4,5,-6,-7,-8,9,10};
 for(i=0;i<10;i++)
 {
  if(a[i]<0)
	  Negcount++;

 }
 printf("The negative count is %d\n",Negcount);
}
