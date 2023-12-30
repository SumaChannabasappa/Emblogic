#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* deleteEnd(void *arg)
{
	Node *strt,*last,*slst;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	strt=last=slst=(Node*)arg;
	while(last->next)
	{
       slst=last; 
	   last=last->next;
	}
	free(last);
	slst->next=NULL;

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
