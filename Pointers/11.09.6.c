/* Write a program in c to check whether an array is subset of another array.. 
   The given first array:4.8.7.11.6.9.5.0.2
   The given second array:5.4.2.0.6*/

#include<stdio.h>
int main()
{
	int a[]={4,8,7,11,6,9,5,0,2};
	int b[]={5,4,2,0,6};
	int i,j,c[i];
	int flag=0;
	int m=sizeof(a)/sizeof(a[0]);//m=9
	int n=sizeof(b)/sizeof(b[0]);//n=5
	//printf("%d %d",m,n);

	for(i=0;i<n;i++)//this loop is for b=5 elements
	{
		for(j=0;j<m;j++)//this loop is for a=9 elements
		{
			if(b[i]==a[j])
			{
                flag=1;
			}

		}
	}

		if(flag!=0)
			printf("The given 2nd array is  subset of 1st array\n");
		else
			printf("The given 2nd array is not subset of 1st array\n");

}
