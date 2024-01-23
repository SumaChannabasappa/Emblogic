#include"../Common/headers.h"
#include"../Common/dataStructures.h"
#include"../Common/defaults.h"
#include "declarations.h"

void* processRequest(void *arg)
{
	int ret,fd,fret;
	Infra *infra;
	Request request;
	char sprfd[4];
	Result *res;
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

	infra=(Infra*)arg;

	fd=open(infra->fifo, O_RDONLY);
	if(fd == -1)
	{
		perror("open");
		(*fptr[0])((void*)"failure");
	}


	ret=read(fd,&request,sizeof(Request));
	if(ret == -1)
	{
		perror("read");
		close(fd);
		(*fptr[0])((void*)"failure");
	}
	printf("%s:%ld\n",__func__,request.cpid);

	sem_post(&infra->tsem);
	printf("%s Semaphore unlocked\n",__func__);

	fret=fork();
	switch(fret)
	{
		case -1:
			perror("fork");
			(*fptr[0])((void*)"failure");
			break;
		case 0:
			sprintf(sprfd,"%d",*(infra->pipe+0));
			execl("./adder","adder",sprfd,NULL);
			perror("execl");
			(*fptr[0])((void*)"failure");
			break;
		default:
			if(sem_wait((sem_t*)infra->smptr1)==-1)
			{
				perror("write");
				(*fptr[0])((void*)"failure");
			}
			ret=write(*(infra->pipe+1),&request,sizeof(Request));
			if(ret==-1)
			{
				perror("write");
				(*fptr[0])((void*)"failure");
			}
	    	sleep(1);
		//	lock thread using mutex instead of using sleep
		//	pthread_mutex_lock(&infra->my_mutex);
		//	printf("MUTEX LOCK\n");
	    	res=(Result*)infra->msPtr;
			printf("%s:%f:%ld\n",__func__,res->result,res->cpid);
		//	pthread_mutex_unlock(&infra->my_mutex);
        //    printf("MUTEX UNLOCK\n");
			ret=msgsnd(infra->msgQue, (void*)res,sizeof(float),0);
			if(ret == -1)
			{
				perror("msgsnd");
				(*fptr[0])((void*)"failure");
			}
			
			printf("%s:%d\n",__func__,ret);
	}

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return infra;
}

