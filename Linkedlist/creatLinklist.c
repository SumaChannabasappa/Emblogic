#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* creatLinklist(void *arg)
{
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return (*fptr[3])(0); //creatNode()
}
