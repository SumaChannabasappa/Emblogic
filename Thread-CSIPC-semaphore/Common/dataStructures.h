union semun
  {
  int val; //value for SETVAL
  struct semid_ds *buf;
  unsigned short *array;
  struct seminfo *__buf;
  };

typedef struct
{
	int *pipe;
	char *fifo;
	int msgQue;
	int shrdMem;
	void *msPtr;
	int semid;
	sem_t tsem;
	union semun suval[4];
	// for shared semaphore through shared memory
	int smKey1;
	void *smptr1;
	sem_t tsem1;
	pthread_mutex_t my_mutex;
}Infra;

typedef struct // I think this is for message Queue
{
	long cpid;
	float result;
}Result;

typedef struct
{
	long cpid; //client pid
	int opr1;
	int opr2;
	char oper;
}Request;

