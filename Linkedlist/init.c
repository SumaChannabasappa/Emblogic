#include"headers.h"
#include"dataStructures.h"
#include"declarations.h"

void* mainMenu(void*);
void* exitProgram(void*);
void* creatLinklist(void*);
void* creatNode(void*);
void* insertNode(void*);
void* deleteNode(void*);
void* displayLinklist(void*);
void* sortLinklist(void*);
void* insertMenu(void*);
void* insertBeg(void*);
void* insertEnd(void*);
void* insertNth(void*);
void* insertKey(void*);
void* deleteMenu(void*);
void* deleteBeg(void*);
void* deleteEnd(void*);
void* deleteNth(void*);
void* deleteKey(void*);



int val;

void* (*fptr[NOF])(void*);

int init()
{
#ifdef DEBUG
	printf("%s: Begin.\n",__func__);
#endif

    val=111; 
	fptr[0]=mainMenu;
	fptr[1]=exitProgram;
	fptr[2]=creatLinklist;
    fptr[3]=creatNode;

	fptr[4]=insertNode;
	fptr[5]=deleteNode;
	fptr[6]=displayLinklist;
	fptr[7]=sortLinklist;

	fptr[8]=insertMenu;
	fptr[9]=insertBeg;
	fptr[10]=insertEnd;
	fptr[11]=insertNth;
	fptr[12]=insertKey;

	fptr[13]=deleteMenu;
    fptr[14]=deleteBeg;
    fptr[15]=deleteEnd;
    fptr[16]=deleteNth;
    fptr[17]=deleteKey;

#ifdef DEBUG
	printf("%s: End.\n",__func__);
#endif
	return 0;
}
