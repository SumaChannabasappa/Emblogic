#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* insertKey(void *arg)
{
	Node *strt, *new;
	int key;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	strt=(Node*)arg;
	new=(*fptr[3])(0); //craetNode();
	printf("%s: Plaese Enter the Key value:\n",__func__);
    scanf("%d",&key);
	while(strt->next)
	{
     strt=strt->next;
	 if(key==strt->info)
	 {
      new->next=strt->next;
	  strt->next=new;
	  return 0;
	 }
	}
	printf("%s: Key Node Not Found.\n",__func__);
#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
