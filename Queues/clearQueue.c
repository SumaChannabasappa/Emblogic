#include"headers.h"
#include"declarations.h"

void* clearQueue(void *arg)
{
	Queue *q;
	q=(Queue*)arg;
    printf("%s: Begin.\n",__func__);

	if((q->r && q->f==-1))
		return arg;
	else 
		return 0;

    printf("%s: End.\n",__func__);
    return 0;
}
