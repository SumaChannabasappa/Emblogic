#include"headers.h"
#include"declarations.h"

void* vThread(void *arg)
{
	int ret,smKey;
	Request req;
	Infra *infra;
	Result *res;
	//void* *smp;
	int smKey1;
	void *smptr1;
	sem_t tsem1;
	Result *smp;
	//	Result result;

	printf("%s:%s: Begin.\n",__FILE__,__func__);
	int fd=*(int*)arg;
	printf("%s:The file descriptor %d",__func__,fd);

	res = (Result*)malloc(sizeof(Result));
	if(!res)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	//Sheared Memory for thresd semaphore
	smKey1 = shmget((key_t)KEY_SHM1, sizeof(sem_t), IPC_CREAT|0666);
	if(smKey1 == -1)
	{
		perror("threadAdder-> error: shmget");
		exit(EXIT_FAILURE);
	}

	smptr1 = shmat(smKey1, NULL, 0);
	if(!smptr1)
	{
		perror("threadAdder-> error: shmat smptr1");
		exit(EXIT_FAILURE);
	}
	ret=read(fd,&req,sizeof(Request));
	if(ret==-1)
	{
		perror("read");
		exit(EXIT_FAILURE);

	}

	sem_post((sem_t*)smptr1);
	printf("Process Request Thread Semaphore released\n");
	printf("%s:%ld\n",__func__,req.cpid);
	// printf("%s:%s: Read request %d Bytes\n",__FILE__,__func__,ret);
	if(req.oper!='+')
	{
		printf("%s: %s: Invalid request\n",__FILE__,__func__);
		close(fd);
		exit(EXIT_FAILURE);
	}

	smKey=shmget(SHRDMEM, sizeof(Result),0666|IPC_CREAT);

	if(smKey == -1)
	{
		perror("shmget");
		close(fd);
		exit(EXIT_FAILURE);
	}

	smp=(Result*)shmat(smKey,NULL,0);
	if(smp==(Result*)-1)
	{
		perror("shmat");
		close(fd);
		exit(EXIT_FAILURE);
	}

	//res=(Result*)smp;

	smp->cpid=req.cpid;
	smp->result=req.opr1+req.opr2;
	printf("%s:%s:%.2f:\n",__FILE__,__func__,smp->result);

	printf("%s:%s: End.\n",__FILE__,__func__);
	return 0;
}

