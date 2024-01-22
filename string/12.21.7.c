#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void stringMatch(char *str1,char *str2);

int main()
{
	char *str1,*str2;
	str1=(char*)malloc(50);
	str2=(char*)malloc(50);
	printf("Enter the string\n");
	scanf("%s",str1);
	printf("String is:%s\n",str1);
	printf("Enter the string\n");
	scanf("%s",str2);
	printf("String is:%s\n",str2);

	stringMatch(str1,str2);
	return 0;
}

void stringMatch(char *str1,char *str2)
{
	int i,j,count=0;
	int SIZE1=strlen(str1);
	int SIZE2=strlen(str2);

	printf("%d\n",SIZE1);
	printf("%d\n",SIZE2);
	for(i=0;i<'\n';i++)
	{
		*(str1+i)==*(str2+i);

	}
	if(*str1==*str2)
		printf("string are matched\n");
	else
		printf("Not matched\n");

}
