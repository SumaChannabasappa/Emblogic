/*Count the number of set bits */

#include<stdio.h>

int main()
{
    int n,count=0,i,mask;
    printf("Enter the number:\n");
    scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		mask=(1<<i);
		if((n&mask)!=0)
		{
			count++;
		}
	}
	printf("The number of set bits are %d\n",count);
    return 0;
}
