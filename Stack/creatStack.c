#include"headers.h"
#include"declarations.h"

void* creatStack(void *arg)
{

	Stack *stk;
    printf("%s: Begin.\n",__func__);

	stk=(Stack*)malloc(sizeof(Stack));
	if(!stk)
	{
     perror("malloc");
	 (*fptr[1])((void*)"failure");
    }
	printf("%s: Enter Stack Size:\n",__func__);
	scanf("%d",&stk->size);
	stk->top=-1;
	stk->stkptr=(int*)malloc(sizeof(int)*stk->size);
    if(!stk->stkptr)
    {
     perror("malloc");
     (*fptr[1])((void*)"failure");
    }

    printf("%s: End.\n",__func__);
    return (void*)stk;
}
