#include"headers.h"
#include"declarations.h"

void* enQueue(void *arg)
{
	Queue *q;
	q=(Queue*)arg;

	printf("%s: Begin.\n",__func__);
	if(q->r>=(q->size)-1)
	{
		printf("%s: Queue id Full.\n",__func__);
		goto RET;
	}	
		printf("%s: Enter the Data for Queue\n",__func__);
		q->r++;
		scanf("%d",q->queue+q->r);
RET:

	printf("%s: End.\n",__func__);
	return arg;
}
