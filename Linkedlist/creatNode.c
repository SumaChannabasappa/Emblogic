#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* creatNode(void *arg)
{
	Node *new;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	new=(Node*)malloc(sizeof(Node));
	if(!new)
	{
     perror("malloc");
	 (*fptr[1])((void*)"failure");
	}
	new->next=NULL;
	new->info=val;
	val++;

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return (void*)new;
}
