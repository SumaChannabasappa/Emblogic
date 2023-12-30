#include"headers.h"
#include"declarations.h"

void* displayQueue(void *arg)
{
	int i;
    Queue *q;
	q=(Queue*)arg;
    printf("%s: Begin.\n",__func__);
	printf("%d\n",q->f);
    
	printf("%s: Queue Elements are\n",__func__);
	for(i=(q->f)+1;i<=q->r;i++)
	{
		printf("%3d\n",*(q->queue+i));
	}
                                             

    printf("%s: End.\n",__func__);
    return 0;
}
