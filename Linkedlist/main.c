#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

int main()
{
	Node *start;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	init();
	start=NULL;
	while(1)
	{
		if(!start)
		start=(*fptr[0])((void*)start); //mainMenu
		else
			(*fptr[0])((void*)start);
	}

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
