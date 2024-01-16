/* Write a program to find prime numbers in array and keep listing the prime numbers in a separate array in a sorted order*/

#include<stdio.h>
#define SIZE n;
int main()
{
	int n,i,j,c,t=0;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int a[n],p[n];
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
		c=0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				c=1;
			}
		} 
	
	if(c=0)
	{
		p[t]=a[i];
		t++;
	}
	}

	printf("The prime numbers are:\n");
	for(i=0;i<t;i++)
	{
		printf("%d\n",p[i]);
	}
	
}
