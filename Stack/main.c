#include"headers.h"
#include"declarations.h"

int main()
{
 Stack *stack;
 printf("%s: Begin.\n",__func__);
 init();
 stack=NULL;
 while(1)
	 stack=(Stack*)(*fptr[0])((void*)stack); //mainMenu
 printf("%s:End.\n",__func__);
}
