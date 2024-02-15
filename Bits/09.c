/* Find the reverse of an integer */

#include<stdio.h>

int main()
{
	int n,rev=0,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{
		if(n&(1<<i))
		{
			rev=rev|(1<<(3-i));
			//printf("The reverse number is %d",rev);
		}
	}
	printf("The reverse number is %d\n",rev);
	int num=rev;
	for(i=3;i>=0;i--)
	{
		int mask=1<<i;
		printf("%c",(num&mask)?'1':'0');
	}
}
