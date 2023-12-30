#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* insertNth(void *arg)
{
	Node *strt,*new;
	int i,pos;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	strt=(Node*)arg;
	new=(*fptr[3])(0);//craeteNode()
	printf("%s: Please Enter the position you want the insert:\n",__func__);
	scanf("%d",&pos);
	for(i=1;i<pos-1;i++)
		strt=strt->next;
	if(strt==NULL)
		printf("There are less than %d of elements\n",pos);
	else
	{
		if(pos==1)
		{
         new->next=strt;
		 strt=new;
		}
		else
		{
		new->next=strt->next;
	    strt->next=new;
		}
	}
	

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
