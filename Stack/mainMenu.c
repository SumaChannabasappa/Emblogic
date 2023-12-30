#include"headers.h"
#include"declarations.h"

void* mainMenu(void *arg)
{
int i;
Stack *stk;
    printf("%s: Begin.\n",__func__);

	stk=(Stack*)arg;

	printf("%s:__MAIN MENU__\n",__func__);
	if(!stk)
	{
		printf("%s:1: Creat Stack\n",__func__);
	}
	else if(stk)
	{
     printf("%s:2: Push Element into Stack\n",__func__);
	 printf("%s:3: Pop Element from Stack\n",__func__);
	 printf("%s:4: Display Stack\n",__func__);
	 printf("%s:5: Search into Stack\n",__func__);
	 printf("%s:6: Flush Stack\n",__func__);
	 printf("%s:7: Destroy Stack\n",__func__);
	}
	printf("%s:0: Exit program\n",__func__);
	printf("%s: Please Enter Your Choice:\n",__func__);
	scanf("%d",&i);
	if((i==1)||(i==7))
		arg=(*fptr[i+1])(arg); //creatStack()
	else if(i==0)
		(*fptr[i+1])((void*)"success"); //ezitFunc()
	else if((stk) && (i>=2) && (i<=7))
		(*fptr[i+1])(arg);

    printf("%s: End.\n",__func__);
    return arg;
}
