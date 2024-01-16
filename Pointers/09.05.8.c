/* Write a program to calculate the sum and average of all elements in an array */

#include<stdio.h>
int main()
{
 int a[5]={10,20,30,40,50};
 int i,sum=0,average;
 for(i=0;i<5;i++)
 {
	 sum=sum+a[i];
 }
 average=sum/5;
 printf("The sum and average of numbers is %d and %d\n",sum,average);

}
