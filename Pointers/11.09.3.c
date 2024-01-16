/* Write a program to merge two array of same size sorted in decending ordere*/

#include<stdio.h>
int main()
{	
	int a[3]={1,2,3};
	int b[3]={1,2,3};
	int c[6];
	int i,temp,j=0,var=0;
	for(i=0;i<3;i++)
	{
		c[i]=a[i];
		//var=var+1;
	}

	for(i=3;i<6;i++)
	{
		c[i]=b[var];
		var=var+1;

	}
	for(i=0;i<6;i++)
		printf("%d\n",c[i]);

	printf("The sorting of merged array:\n");
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(c[i]<c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",c[i]);
	}

}
