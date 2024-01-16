/* Write a program to left rotate an array*/

#include<stdio.h>
#define SIZE(n)(n)
int main()
{
	int n,i,k=2;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int a[SIZE(n)];
	printf("Enter the elements in the array:\n");
	for(i=0;i<SIZE(n);i++)
		scanf("%d",&a[i]);
	while(k!=0){
	a[n]=a[0];

	for(i=0;i<n;i++)
	{ 

		a[i]=a[i+1];


	}
	k--;
	}

	printf("Left rotation array\n");

	for(i=0;i<n;i++)
		printf("%d\n",a[i]);

}
