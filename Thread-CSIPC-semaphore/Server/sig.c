#include "Common/headers.h"
#include "Common/dataStructures.h"

void sig_handler(int);
int main()
{
	int i = 1;
	int rc;
	signal(SIGINT, sig_handler); //Register
	signal(SIGQUIT, sig_handler); //Register
	while(1)
	{
		printf("i : %d\n", i++);
		sleep(1);
	}
	signal(SIGINT, sig_handler); //Register
	int ret = raise(SIGINT);
	printf("ret  : %d\n", ret);
	if(ret < 0)
	{
		perror("raise");
		exit(EXIT_FAILURE);
	}
	signal(SIGSEGV, sig_handler); //Register
	ret = raise(SIGSEGV);
	if(ret < 0)
	{
		perror("raise : Segmentation Fault");
		exit(EXIT_FAILURE);
	}
	signal(SIGQUIT, sig_handler); //Register
	ret = raise(SIGQUIT);
	if(ret < 0)
	{
		perror("raise : Core Dumped");
		exit(EXIT_FAILURE);
	}
	return 0;
}
void sig_handler(int snum)
{
	int ret_sm;
	Infra *infra;
	system("unlink ./requestFIFO");
	ret_sm = shmdt(infra->smptr);
	if(ret_sm == -1)
	{
		perror("shmdt");
		exit(EXIT_FAILURE);
	}
	printf("%s : Signal Hander executed successfully\n", __func__);
	exit(EXIT_SUCCESS);
}
