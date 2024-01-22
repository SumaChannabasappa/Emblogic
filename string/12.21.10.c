#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char *str;
	int i;
	str=(char*)malloc(50);

	printf("Enter the string\n");
	scanf("%s",str);
	printf("String is:%s\n",str);

	for(i=0;i<strlen(str);i++)
	{
		char ch=tolower(str[i]);
			printf("The character is %c\n",ch);
	}
	free(str);
	return 0;
}

