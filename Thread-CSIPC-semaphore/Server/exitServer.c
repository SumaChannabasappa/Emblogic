#include"../Common/headers.h"
#include"../Common/dataStructures.h"
#include"../Common/defaults.h"
#include "declarations.h"

void* exitServer(void *arg)
{
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	if(strncmp((char*)arg,"success",7)==0)
		exit(EXIT_SUCCESS);
	if(strncmp((char*)arg,"failure",7)==0)
        exit(EXIT_FAILURE);

#ifdef DEBUG
    printf("%s: End.\n",__func__);
#endif
	return 0;
}
