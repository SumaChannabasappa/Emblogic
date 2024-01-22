
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void frequency(char *str);

int main()
{
	char *str;
	str=(char*)malloc(50);
	printf("Enter the string\n");
	scanf("%s",str);
	printf("String is:%s\n",str);
	frequency(str);
	return 0;
}

void frequency(char *str)
{
	int i,j,count=0;
	int SIZE=strlen(str);
	printf("%d\n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		count=1;
		for(j=i+1;j<SIZE;j++)
		{
			if(*(str+i)==*(str+j))
			{
				count++;
				*(str + j) = '\0';

			}

		}
		// To avoid counting the same character multiple times
		if (count > 0 && *(str + i) != '\0')
		{
			printf("%c - %d\n", *(str + i), count);

		}

	}

}
