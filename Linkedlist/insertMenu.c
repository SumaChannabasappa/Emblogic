#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* insertMenu(void *arg)
{
	int i;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	printf("%s: __InsertMENU__\n",__func__);
	printf("%s: 1:Insert at The Beginning:\n",__func__);
	printf("%s: 2:Insert Node at The End:\n",__func__);
	printf("%s: 3:Insert Node at Nth Position:\n",__func__);
	printf("%s: 4:Insert Node at Key Value:\n",__func__);
	printf("%s: Please Enter your Insert choice:\n",__func__);
	scanf("%d",&i);

	if((i>=1)&&(i<=4))
		(*fptr[i+8])(arg);//insert--()

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return arg;
}
