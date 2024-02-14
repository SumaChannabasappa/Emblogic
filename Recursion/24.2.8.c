#include<stdio.h>
int sum(int num);
int main()
{
	int num,r;
	printf("Enter the number\n");
	scanf("%d",&num);
	r=sum(num);
	printf("The reverse number is %d\n",r);
}

int sum(int num)
{

	int n;
	if(num>0)
	{
		n=num%10;
		num=num/10;
        return n+sum(num);
	}
	else 
	{
		return 0;
	}
	//printf("The reverse number is %d\n",sum);
	//return sum;

}
