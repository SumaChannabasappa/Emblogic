/* Converting Binary to intger */

#include<stdio.h>

int main()
{
	char bit;
	int i, num=0;

	printf("Enter the bit pattern:\n");
	for(i=0;i<=3;i++)
	{
		bit=getchar(); //it reads the current bit

		if(bit=='0')
		{
			num=num<<1;
		}
		else if(bit=='1')
		{
			num=(num<<1)+1;
		}
		else
			break;

	}
	printf("The number is %d",num);
}
