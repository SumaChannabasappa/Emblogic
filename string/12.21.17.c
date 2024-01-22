#include<stdio.h>
#include<string.h>

int main()
{

	char str[50];
	int j,i;
	printf("Enter the string\n");
	scanf("%s",str);
	for(i=0,j=strlen(str)-1 ; i<=j ; i++,j--)
	{   
		if(str[i]!=str[j])
		break;
		
	}
	if(i>j)
		printf("String is Palindrome\n");
	else
		printf("String is not Palindrome\n");
	return 0;
}
