#ifndef NOF
#define NOF 18
#endif

extern int val;

int init();

extern void* mainMenu(void*);
extern void* exitProgram(void*);
extern void* creatLinklist(void*);
extern void* creatNode(void*);

extern void* insertNode(void*);
extern void* deleteNode(void*);
extern void* displayLinklist(void*);
extern void* sortLinklist(void*);

extern void* insertMenu(void*);
extern void* insertBeg(void*);
extern void* insertEnd(void*);
extern void* insertNth(void*);
extern void* insertKey(void*);

extern void* deleteMenu(void*);
extern void* deleteBeg(void*);
extern void* deleteEnd(void*);
extern void* deleteNth(void*);
extern void* deleteKey(void*);


extern void* (*fptr[NOF])(void*);
