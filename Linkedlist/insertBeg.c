#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* insertBeg(void *arg)
{
	Node *strt, *new;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	strt=(Node*)arg;
	new=(*fptr[3])(0); //creatNode()
	new->next=strt->next;
	strt->next=new;
#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
