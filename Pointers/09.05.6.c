/*Write a program to reverse an array. This program reverse the array elements*/

#include<stdio.h>
int main()
{
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 int i,j,temp=0;
 for(i=0,j=9;i<j;i++,j--)
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 for(j=0;j<10;j++)
	 printf("%d\n",a[j]);

}
