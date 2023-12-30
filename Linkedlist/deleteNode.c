#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* deleteNode(void *arg)
{
	Node *strt;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

    strt=(Node*)arg;
	if(!strt->next)
	{
		printf("%s: Linklist is Empty.\n",__func__);
		return 0;
	}
	(*fptr[13])(0); //deleteMenu

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
