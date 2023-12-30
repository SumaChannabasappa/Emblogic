#include"headers.h"
#include"declarations.h"

void* flushStack(void *arg)
{
	Stack *stk;
	stk=(Stack*)stk;
    printf("%s: Begin.\n",__func__);

	if((stk->top)==-1)
		return arg;
	else 
		return 0;

    printf("%s: End.\n",__func__);
    return 0;
}
