#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* mainMenu(void *arg)
{
	int i;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	printf("%s: __MAINMENU__\n",__func__);
	if(!arg)
		printf("%s: 1:Create Linklist:\n",__func__);
	else
	{
		printf("%s: 2:Insert Node:\n",__func__);
		printf("%s: 3:Delet Node:\n",__func__);
		printf("%s: 4:Display Linklist:\n",__func__);
		printf("%s: 5:Sort Linklist:\n",__func__);
	}
	printf("%s: 0:Exit Program:\n",__func__);
	printf("%s: Please Enter your choice:\n",__func__);
	scanf("%d", &i);

	if(i==0)
		(*fptr[i+1])((void*)"success");
	else if((i==1) && !(Node*)arg )
		return (*fptr[i+1])(arg);//createLinklist
    else if( (arg) && (i>=2) || (i<=5) )
          (*fptr[i+2])(arg);

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return arg;
}
