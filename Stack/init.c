#include"headers.h"
#include"declarations.h"

void* mainMenu(void*);
void* exitFunc(void*);
void* mainMenu(void*);
void* creatStack(void*);
void* pushElement(void*);
void* popElement(void*);
void* displayStack(void*);
void* serachStack(void*);
void* flushStack(void*);
void* destroyStack(void*);

void* (*fptr[NOF])(void*);

int init()
{
 printf("%s: Begin.\n",__func__);

 fptr[0]=mainMenu;
 fptr[1]=exitFunc;
 fptr[2]=creatStack;
 fptr[3]=pushElement;
 fptr[4]=popElement;
 fptr[5]=displayStack;
 fptr[6]=searchStack;
 fptr[7]=flushStack;
 fptr[8]=destroyStack;

 printf("%s: End.\n",__func__);
}
