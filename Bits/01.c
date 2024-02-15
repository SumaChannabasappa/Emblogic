/* Convert integer into Binary*/

#include<stdio.h>
void int_bin(int num);

int main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	int_bin(num);
	return 0;
}

void int_bin(int num)
{
	int i,mask;
	for(i=3;i>=0;i--)
	{
       mask=1<<i;
	   putchar((num&mask)?'1':'0');
	}
	printf("\n");

}
