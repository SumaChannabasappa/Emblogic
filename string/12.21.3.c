/*Write a program to find the length of a string*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char string[32]="hello, World";
printf("The size of string is %d\n",sizeof(string));
printf("The stringlength of string is %d\n",strlen(string));
}
