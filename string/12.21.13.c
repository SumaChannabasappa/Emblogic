#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char *str,*newStr;
	int i,j;
	str=(char*)malloc(50);
    newStr = (char *)malloc(strlen(str) + 1);

	printf("Enter the string\n");
	scanf("%s",str);
	printf("String is:%s\n",str);

	for(i=0;i<strlen(str);i++)
	{
		char ch=str[i];
		if(!isspace(ch))
		{
         newStr[j]=str[i];
		 j++;
		}
	}
	newStr[j] = '\0';
	printf("The character is %c\n",newStr);
	free(str);
	return 0;
}

