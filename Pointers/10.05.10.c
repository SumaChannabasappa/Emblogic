/* Write a program to count total number of duplicate eliments in an array*/

#include<stdio.h>
int main()
{
	int a[10]={1,1,2,3,4,5,6,6,7,8};
	int i,j,count=0;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j]){
				count++;

			}
		}
	}
	printf("%d\n",count);
}
