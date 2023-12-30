#include"headers.h"
#include"declarations.h"

int main()
{
 Queue *q;
 printf("%s: Begin.\n",__func__);
 init();
 q = NULL;
 while(1)
	 q=(Queue*)(*fptr[0])((void*)q); //mainMenu
 printf("%s:End.\n",__func__);
 return 0;
}
