#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* insertEnd(void *arg)
{
	Node *start, *last;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	last=start=(Node*)arg;
	while(last->next)
		last=last->next;

	last->next=(*fptr[3])(0); //createNode()

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
