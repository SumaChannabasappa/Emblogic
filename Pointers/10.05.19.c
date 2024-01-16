/* Write a program to for right rotation of array*/

#include<stdio.h>
#define SIZE(n) (n)

int main()
{
	int n,i,temp;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[SIZE(n)];
	printf("Enter the elements in the array:\n");
	for(i=0;i<SIZE(n);i++)
		scanf("%d",&a[i]);

	for(i=n-1;i>0;i--)
	{

		a[i]=a[i-1];


	}
	a[0]=a[n];

	printf("right rotation array\n");

	for(i=0;i<n;i++)
		printf("%d\n",a[i]);

}
