/* Write a Program to sort even and odd elements of array separatly */

#include<stdio.h>
#define SIZE(n) n;
int main()
{
	int n,i,j,temp;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int a[SIZE(n)],e[SIZE(n)],even,o[SIZE(n)],odd;
	printf("Enter the elements of the array:\n");
	for(i=0;i<SIZE(n);i++)
		scanf("%d",&a[i]);
	printf("Sorting of even and odd array:\n");
	
	for(i=even=odd=0;i<SIZE(n);i++)
	{
		if(a[i]%2==0)
		{
			e[even]=a[i];
			even++;
		}
		else
		{
			o[odd]=o[i];
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


/*

	for(j=even=0;j<SIZE(n);j++)
	{
		for(i=even=0;i<SIZE(n)-1-j;i++)
		{
			temp=e[i];
			e[i]=e[i+1];
			e[i+1]=temp;
		}
	}
	for(j=odd=0;j<SIZE(n);j++)
	{
		for(i=odd=0;i<SIZE(n)-1-j;i++)
		{
			temp=o[i];
			o[i]=o[i+1];
			o[i+1]=temp;
		}
	}
	printf("%d and %d",e[i+1],o[i+1]);
*/
}
