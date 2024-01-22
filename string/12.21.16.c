#include<stdio.h>
#include<string.h>
//#include<conio.h>

/*int main(void)
{
 char str[50];
 char rev[50];
 int len,i;

 printf("Enter the string\n");
 scanf("%s",str);
 len=strlen(str);
 int strIndex=len-1;
  int revIndex=0;
 while(strIndex>=0)
 {
   rev[revIndex]=str[strIndex];
   revIndex++;
   strIndex--;
 }
 printf("%s\n",rev[revIndex]);
 return 0;
}*/


int main()
{

	char str[50];
	int len;
	printf("Enter the string\n");
	scanf("%s",str);
	for(len=strlen(str)-1;len>=0;len--)
	{
      printf("%c",str[len]);
	}
	return 0;
}
