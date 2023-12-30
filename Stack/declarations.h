#ifndef NOF
#define NOF 9
#endif

typedef struct stack
{
 int size;
 int *stkptr;
 int top;
}Stack;

int init();

extern void* exitFunc(void*);
extern void* mainMenu(void*);
extern void* creatStack(void*);
extern void* pushElement(void*);
extern void* popElement(void*);
extern void* displayStack(void*);
extern void* searchStack(void*);
extern void* flushStack(void*);
extern void* destroyStack(void*);

extern void* (*fptr[NOF])(void*);
