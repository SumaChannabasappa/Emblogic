/* Write a program to sort array element in ascending or descending order.*/

#include<stdio.h>
#define SIZE(n)(n)
int main()
{
	int n,i,j,temp;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int a[SIZE(n)];

	printf("Enter the unsorted elements in the array:\n");
	for(i=0;i<SIZE(n);i++)
		scanf("%d",&a[i]);

	for(j=0;j<SIZE(n);j++)
	{
		for(i=0;i<SIZE(n)-1-j;i++)
		{
			if(a[i+1]>a[i])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}

		}
	}
	printf("The sorted elements are:\n");
	for(i=0;i<SIZE(n);i++)
		printf("%d\n",a[i]);
}
