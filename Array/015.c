/* Selection sort */

#include<stdio.h>
#define Max 50

int main()
{
	int num,arr[Max],i,j,temp,min;
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	printf("Enter the elements:\n");
	for(i=0;i<num-1;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<num;i++)
	{
		min=i;
		for(j=i+1;j<num;j++)
		{
			if(arr[min]>arr[j])
				min=j;
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	for(i=0;i<num;i++)
		printf("%d",arr[i]);
	printf("\n");
	return 0;
}
