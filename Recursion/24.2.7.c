#include<stdio.h>
int palindrome(int num,int rev);
int main()
{
	int num,rev=0,r;
	printf("Enter the number\n");
	scanf("%d",&num);
	r=palindrome(num,rev);
	if(num==r)
		printf("The number is palindrome\n");
	else
		printf("The number is not palindrome\n");
}

int palindrome(int num,int rev)
{

	int n;
	if(num>0)
	{
		n=num%10;
		rev=rev*10+n;
		num=num/10;
		return palindrome(num,rev);
	}
	else
		return rev;

}
