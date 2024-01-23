#ifndef NOF
#define NOF 3
#endif

int init();

extern void* exitServer(void*);
extern void* creatInfra(void*);

extern void* (*fptr[NOF])(void*);
