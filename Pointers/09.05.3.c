/*Write a program to calculate Average of all elements in the array*/

#include<stdio.h>
int main()
{
 int a[5]={1,2,3,4,5};
 int i,sum=0,average;
 for(i=0;i<5;i++)
 {
   sum=sum+a[i];
 }
 average=sum/5;
 printf("The average is %d\n",average);
}
