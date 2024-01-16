/* Write a program to put even and odd elements of an array in 2 separate arrays */

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int a[n],e[n],even,o[n],odd;
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("a[%d]=%d\n",i,a[i]);

	for(i=even=odd=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			e[even]=a[i];
			even++;
		}
		else
		{
			o[odd]=a[i];
			odd++;
		}
	}
	while(even!=n)
	{
      e[even]=-1;
	  even++;
	}
	while(odd!=n)
	{
      o[odd]=-1;
	  odd++;
	}
	for(i=0;i<n;i++)
		printf("e[%d]=%2d,o[%d]=%2d\n",i,e[i],i,o[i]);
}
