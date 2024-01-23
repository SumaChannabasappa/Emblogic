#include"../Common/headers.h"
#include"../Common/defaults.h"
#include"../Common/dataStructures.h"


int main()
{
	int fd,ret,mqKey;
	Request req;
	Result  *result;
	result = (Result*)malloc(sizeof(Result));
	if(!result)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	printf("%s: %s: Begin.\n",__FILE__,__func__);
	if(access(FIFONAME,F_OK)==-1)
        {
                ret=mkfifo(FIFONAME,0666);
                if(ret==-1)
                {
                        printf("FIFO");
                        exit(EXIT_FAILURE);
                }
                printf("FIFO created\n");
        }

	fd=open(FIFONAME,O_WRONLY);
	if(fd==-1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	printf("%s:%s: Request FIFO Opened for writing Request.\n",__FILE__,__func__);

	req.cpid=getpid();
	req.opr1=55;
	req.opr2=77;
	req.oper='+';

	ret=write(fd,&req,sizeof(Request));

	if(ret==-1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}

	mqKey=msgget((key_t)1111,0666|IPC_CREAT);
	if(mqKey==-1)
	{
		perror("msgget");
		exit(EXIT_FAILURE);
	}
	printf("%s:%ld:Message key is success\n",__func__,getpid());
	ret=msgrcv(mqKey,(Result*)result,sizeof(float), getpid(),0);
	if(ret==-1)
	{
		perror("msgrcv");
		exit(EXIT_FAILURE);
	}
	printf("%s:%s:Result:%.2f PID:%d\n",__FILE__,__func__,result->result,getpid());

	printf("%s:%s:End.\n",__FILE__,__func__);
	return 0;
}
