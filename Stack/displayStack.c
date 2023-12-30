#include"headers.h"
#include"declarations.h"

void* displayStack(void *arg)
{
	int i;
    Stack *stk;
	stk=(Stack*)arg;
    printf("%s: Begin.\n",__func__);
    
	printf("%s: Stack Elements are\n",__func__);
	for(i=stk->top;i>=0;i--)
	{
		printf("%3d\n",*((stk->stkptr)+i));
	}
                                             

    printf("%s: End.\n",__func__);
    return 0;
}
