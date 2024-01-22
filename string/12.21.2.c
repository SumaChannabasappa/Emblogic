#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* getString();

int main()
{
	char *str;
	str=getString();
    displayString(str);
	return 0;
}

char* getString()
{
	int ch,i=0;
	char *str=NULL;
	int size=10;
	str=(char*)malloc(size*sizeof(char));

	int c=getchar();
	while(c!='\n'&&c!=EOF)
	{
     str[i++]=(char)c;
	}

	return str;
}

void diplayString(char *str)
{
char *str=str();
if(str!=NULL)
{
	printf("The entered string is: %s\n",inputted_string);
    free(inputted_string);
}
}

