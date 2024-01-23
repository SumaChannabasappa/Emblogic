#include "../Common/headers.h"
#include "../Common/dataStructures.h"
#include "../Common/defaults.h"
#include "declarations.h"

int main()
{
	Infra *infra;
	pthread_t thid;
	int ret;
	//unsigned short counter=0;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif
    init();
	infra=(Infra*)(*fptr[1])(0); //cretInfra()
	while(1)
	{
		//get semaphore
		sem_wait(&infra->tsem);
		ret=pthread_create(&thid,NULL,fptr[2],(void*)infra);//ProcessRequest()
		printf("%s: The ret is %d\n",__func__,ret);
		if(ret!=0)
		{
         perror("pthread_create");
			 exit(EXIT_FAILURE);
		}
		pthread_join(thid,NULL);
	
	}

#ifdef DEBUG
    printf("%s: End.\n",__func__);
#endif
	pthread_exit(NULL);
	return 0;
}
