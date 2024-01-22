#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void stringConcat(char *str,char *str2);
int main()
{
	char *str,*str2="channabasappa";
	int i;
	str=(char*)malloc(50);
	printf("Enter the String\n");
	scanf("%s",str);
	printf("String is:%s\n",str);
	stringConcat(str,str2);

	free(str);

	return 0;
}

void stringConcat(char *str,char *str2)
{
	int i,j;
	int L1=strlen(str);
	int L2=strlen(str2);
	printf("StringL is:%d\n",L1);
	printf("StringL is:%d\n",L2);
	for(i=0;i<=L2;i++)
	{
		str[L1+i]=str2[i];
	}
	printf("String is:%s\n",str);
}



