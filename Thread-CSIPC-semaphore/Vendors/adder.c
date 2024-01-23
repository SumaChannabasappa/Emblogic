#include"headers.h"
#include"declarations.h"

int main(int argc,char *argv[])
{
	int fd,ret,smKey;
//	Request req;
//	Infra *infra;
	//Result *res;
  // Result *smp;
//	Result result;
    pthread_t thid;

 printf("%s:%s: Begin.\n",__FILE__,__func__);

 if(argc!=2)
 {
  printf("%s: Insufficient Arguments\n",__func__);
  printf("%s: Pass the read file-descriptor.\n",__func__);
  return -1;
 }
 fd=atoi(argv[1]);
 ret=pthread_create(&thid,0,vThread,(void*)&fd);
 if(ret!=0)
 {
   perror("pthread_create");
   exit(EXIT_FAILURE);
 }
 pthread_join(thid, NULL);
 printf("%s:%s: End.\n",__FILE__,__func__);
 return 0;
}

