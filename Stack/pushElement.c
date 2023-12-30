#include"headers.h"
#include"declarations.h"

void* pushElement(void *arg)
{
	Stack *stk;
	stk=(Stack*)arg;

	printf("%s: Begin.\n",__func__);
	if(stk->top>=(stk->size)-1)
	{
		printf("%s: OverFlow.\n",__func__);
		return arg;
	}
	else
	{	
		stk->top++;
		printf("%s: Enter the elements\n",__func__);
		scanf("%d",(stk->stkptr)+(stk->top));
	}

	printf("%s: End.\n",__func__);
	return arg;
}
