#include<stdio.h>

int main()
{
 int num,p,k,extrct;
 printf("Enter the number\n");
 scanf("%d",&num);
 printf("Enter the position\n");
 scanf("%d",&p);
 printf("Enter the number of bits\n");
 scanf("%d",&k);
 extrct=((num>>(p-1))&((1<<k)-1));
 printf("The extracted number is %d\n",extrct);


}
