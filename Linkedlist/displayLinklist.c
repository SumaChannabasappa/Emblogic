#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* displayLinklist(void *arg)
{
	int i;
	Node *curr;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	curr=(Node*)arg;
	i=1;
	printf("%s:__link list nodes__\n",__func__);
	while(curr->next)
	{
      curr=curr->next;
	  printf("Node-->%2d:%3d\n",i++,curr->info);
	}

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
