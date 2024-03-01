/* Linear Search */

#include<stdio.h>
#define Max 50
int LinearSearch(int arr[],int n,int item);
int main()
{
	int num,item,arr[Max],i;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	printf("Enter the elements:\n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element that you want to search:\n");
	scanf("%d",&item);
	int index=LinearSearch(arr,num,item);
	if(index==-1)
		printf("Element not found\n");
	else
		printf("Element found is %d at the position %d\n", item,index);
	return 0;
}

int LinearSearch(int arr[],int n,int item)
{
	int i=0;
	while(i<n && item!=arr[i])
		i++;
	if(i<n)
		return i;
	else 
		return -1;

}
