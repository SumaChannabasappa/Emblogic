#include"headers.h"
#include"declarations.h"

void* mainMenu(void*);
void* exitFunc(void*);
void* creatQueue(void*);
void* enQueue(void*);
void* deQueue(void*);
void* displayQueue(void*);
void* serachQueue(void*);
void* clearQueue(void*);

void* (*fptr[NOF])(void*);

int init()
{
 printf("%s: Begin.\n",__func__);

 fptr[0]=mainMenu;
 fptr[1]=exitFunc;
 fptr[2]=creatQueue;
 fptr[3]=enQueue;
 fptr[4]=deQueue;
 fptr[5]=displayQueue;
 fptr[6]=searchQueue;
 fptr[7]=clearQueue;

 printf("%s: End.\n",__func__);
}
