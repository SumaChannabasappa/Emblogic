/*Write a C program to find smallest element in array of size n.*/

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the arrays:\n");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	int small=a[0];
	for(i=0;i<n;i++)
	{
		if(small>a[i])
			small=a[i];

	}
	printf("The small array element is %d\n",small);


}
