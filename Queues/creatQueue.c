#include"headers.h"
#include"declarations.h"

void* creatQueue(void *arg)
{

	Queue *q;
    printf("%s: Begin.\n",__func__);

	q=(Queue*)arg;
	if(q)
	{
     printf("%s: Queue Already Created.\n",__func__);
	 return arg;
	}

	q=(Queue*)malloc(sizeof(Queue));
	if(!q)
	{
     perror("malloc");
	 (*fptr[1])((void*)"failure");
    }
	printf("%s: Enter Queue Size:\n",__func__);
	scanf("%d",&q->size);
	q->queue=(int*)malloc(sizeof(int)*q->size);
    if(!q)
    {
     perror("malloc");
     (*fptr[1])((void*)"failure");
    }
	q->r=q->f=-1;

    printf("%s: End.\n",__func__);
    return (void*)q;
}
