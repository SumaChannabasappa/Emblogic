/* Write a C program to count frequency of each element in an array */

#include<stdio.h>
int main()
{
	int n,count=0,i,j;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	int a[n];
	int fre[n];
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		fre[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				fre[j]=0;
			}
		}
		if(fre[i]!=0)
		{
			fre[i]=count;
		}	 
	}
	for(i=0;i<n;i++)
	{
		if(fre[i]!=0)
		{
			printf("%d is occurs %d times\n",a[i],fre[i]);
		}
	}
}
