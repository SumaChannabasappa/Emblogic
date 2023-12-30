#ifndef NOF
#define NOF 8
#endif

typedef struct 
{
 int *queue;
 int r,f;
 int size;
}Queue;

int init();

extern void* exitFunc(void*);
extern void* mainMenu(void*);
extern void* creatQueue(void*);
extern void* enQueue(void*);
extern void* deQueue(void*);
extern void* displayQueue(void*);
extern void* searchQueue(void*);
extern void* clearQueue(void*);

extern void* (*fptr[NOF])(void*);
