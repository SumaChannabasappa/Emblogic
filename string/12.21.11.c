#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char *str,str2;
	int i;
	str=(char*)malloc(50);
    strcpy(str,"SUma");
	printf("String is:%s\n",str);
	free(str);

	return 0;
}

