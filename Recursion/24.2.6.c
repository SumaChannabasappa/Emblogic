#include<stdio.h>
int reverse(int num,int rev);
int main()
{
	int num,rev=0,r;
	printf("Enter the number\n");
	scanf("%d",&num);
	r=reverse(num,rev);
	printf("The reverse number is %d\n",r);
}

int reverse(int num,int rev)
{

	int n;
	if(num>0)
	{
		n=num%10;
		rev=rev*10+n;
		num=num/10;
		return reverse(num,rev);
	}
	else
		return rev;
}
