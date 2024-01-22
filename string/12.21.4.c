/*Write a program to concatinate two string*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char string1[32]="hello, World ";
char string2[]="to the Linux";

strcat(string1,string2);
printf("%s\n",string1);
}
