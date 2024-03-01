/* Binary Search */

#include<stdio.h>
#define Max 50
int BinarySearch(int arr[],int n,int item);
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
	int index=BinarySearch(arr,num,item);
	if(index==-1)
		printf("Element not found\n");
	else
		printf("Element found is %d at the position %d\n", item,index);
	return 0;
}

int BinarySearch(int arr[],int n,int item)
{
	int i=0,low=0,up=n-1,mid;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(item>arr[mid])
			low=mid+1;
		else if(item<arr[mid])
			up=mid-1;
		else
			return mid;
	}
	return -1;

}
