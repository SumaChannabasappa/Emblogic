#include"headers.h"
#include"declarations.h"

void* mainMenu(void *arg)
{
	int i;
	Queue *q;
	printf("%s: Begin.\n",__func__);

	q=(Queue*)arg;

	printf("%s:__MAIN MENU__\n",__func__);
	if(!q)
	{
		printf("%s:1: Creat Queue\n",__func__);
	}
	else 
	{
		printf("%s:2: EnQueue Data\n",__func__);
		printf("%s:3: DeQueue Data\n",__func__);
		printf("%s:4: Display Data\n",__func__);
		printf("%s:5: Search Queue\n",__func__);
		printf("%s:6: clear Queue\n",__func__);
	}
	printf("%s:0: Exit program\n",__func__);
	printf("%s: Please Enter Your Choice:\n",__func__);
	scanf("%d",&i);

	if(i==0)
		(*fptr[i+1])((void*)"success"); //exit Func()
	else if((i==1)&&(!q))
        q=(Queue*)(*fptr[i+1])((void*)q); //creat queue()
    else if((i>=2) && (i<=5))
		(*fptr[i+1])((void*)q);//other functions

	printf("%s: End.\n",__func__);
	return (void*)q;
}
