/* program to convert a decimal to Binary, Octal or Hexadecimal */

#include<stdio.h>
void func(int num,int b);
int main(void)
{
	int num,ch;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Enter the choice:\n");
	printf("1. Binary\n");
	printf("2. Octal\n");
	printf("3. Hexadecimal\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Binary equivalent is:");
			func(num,2);
			break;
		case 2:
			printf("Octal equivalent is:");
			func(num,8);
			break;
		case 3:
			printf("Hexadecimal equivalent is:");
			func(num,16);
			break;
	}
	printf("\n");
	return 0;
}

void func(int num,int b)
{
	int i=0,j,rem;
	char arr[20];
	while(num>0)
	{
		rem=num%b;
		num=num/b;
		if(rem>9 && rem <16)
			arr[i++]=rem-10+'A';
		else
			arr[i++]=rem+'0';
	}
	for(j=i-1;j>=0;j--)
		printf("%c",arr[j]);
}
