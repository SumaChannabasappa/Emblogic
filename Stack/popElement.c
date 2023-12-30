#include"headers.h"
#include"declarations.h"

void* popElement(void *arg)
{
	Stack *stk;
	stk=(Stack*)arg;
	int val;
	printf("%s: Begin.\n",__func__);

	if((stk->top)<0)
	{
		printf("Stack Underflow");
		return arg;
	}
	else
	{
		stk->top--;
		//free(stk->ptr);
		return arg;
	}



	printf("%s: End.\n",__func__);
	return 0;
}
