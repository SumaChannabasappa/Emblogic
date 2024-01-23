#include"../Common/headers.h"
#include"../Common/dataStructures.h"
#include"../Common/defaults.h"
#include "declarations.h"

void* exitServer(void*);
void* creatInfra(void*);
void* processRequest(void*);

void* (*fptr[NOF])(void*);


int init()
{
#ifdef DEBUG
    printf("%s: Begin.\n",__func__);
#endif

	fptr[0]=exitServer;
    fptr[1]=creatInfra;
	fptr[2]=processRequest;


#ifdef DEBUG
    printf("%s: End.\n",__func__);
#endif
    return 0;
}

