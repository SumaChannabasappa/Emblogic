/* Write a program to print all unique elements in an array */

#include<stdio.h>
int main()
{
	int i,j,n,count=0;
	printf("enter the number of elements in the array:\n");
	scanf("%d",&n);
	int a[n],f[n];
	printf("The elements in the array are:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//for(i=0;i<n;i++)
	//{
	//	a[j]=a[i];
	//	printf("%d\t",a[j]);
	//}

	for(i=0;i<n;i++)
	{

		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		
		if(count==1)	
			printf("The unique element are %d\n",a[i]);
		count=0;

	}
}
