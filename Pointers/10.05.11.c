/* Write a program to delete all duplicate elements from an array*/

#include<stdio.h>
int main()
{
	int n;
 printf("Enter the number of elements in the array:\n");
 scanf("%d",&n);
 int a[n],undup=0,b[undup];
 int i,j;
 printf("Enter the elements in the array:\n");
 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);

 printf("Deleting the duplicate elements:\n");
 for(i=undup=0;i<n;i++)
 {
  for(j=undup=i+1;j<n;j++)
  {
   if(a[i]!=a[j])
   {
	
	   b[undup]=a[i];
	   undup++;
     
   }
  }
 }
 while(undup!=n)
 {
	 b[undup]=-1;
	 undup++;
 }
 for(i=0;i<n;i++)
 printf("%d\n",b[i]);
}
