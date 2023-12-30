#include"headers.h"
#include"declarations.h"

void* deQueue(void *arg)
{
	Queue *q;
	q=(Queue*)arg;
	printf("%s: Begin.\n",__func__);

	if((q->r==-1)||(q->r==q->f))
	{
		printf("%s: Queue is Empty.\n",__func__);
		q->r=q->f=-1;
		goto RET;
	}
	q->f++;

	printf("%s: Data: %d\n",__func__,*(q->queue+q->f));
RET:


	printf("%s: End.\n",__func__);
	return 0;
}
