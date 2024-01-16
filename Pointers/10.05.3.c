/* Write a program to count total number of even and odd elements in an array */

#include<stdio.h>
int main()
{
 int i,ecount=0,ocount=0;
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 for(i=0;i<10;i++)
 {
	 if(a[i]%2==0)
		 ecount++;
	 else
		 ocount++;
 }
 printf("The even and odd count is %d and %d\n",ecount,ocount);

}
