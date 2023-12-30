#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* deleteMenu(void *arg)
{
	int i;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	printf("%s: __Delete MENU__\n",__func__);
	printf("%s: 1:delete from The Beginning:\n",__func__);
	printf("%s: 2:delete Node from The End:\n",__func__);
	printf("%s: 3:delete Node at Nth Position:\n",__func__);
	printf("%s: 4:delete Node at Key Value:\n",__func__);
	printf("%s: Please Enter your delete choice:\n",__func__);
	scanf("%d",&i);

	if((i>=1)&&(i<=4))
	{
		(*fptr[i+13])(arg);//insert--()
	}

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return arg;
}
