#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* insertNode(void *arg)
{
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	(*fptr[8])(arg);//inserMenu	

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
