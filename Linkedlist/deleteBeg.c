#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* deleteBeg(void *arg)
{
	Node *strt, *frst;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	strt=frst=(Node*)arg;

	if(strt->next)
		frst=strt->next;

	strt->next=frst->next;
	free(frst);

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
