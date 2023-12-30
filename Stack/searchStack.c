#include"headers.h"
#include"declarations.h"

void* searchStack(void *arg)
{
    Stack *stk;
	stk=(Stack*)arg;
	int num,i;
    printf("%s: Begin.\n",__func__);
	printf("%s: Enter the number that you want to search\n",__func__);
	scanf("%d",&num);
	for(i=(stk->top);i>=0;i--);
	{
	if(*(stk->stkptr)==num)
		printf("%s: The stack number is %d",__func__,num);
	}


    printf("%s: End.\n",__func__);
    return 0;
}
