#define NOF 23
int init();
extern int var;
extern void* mainMenu(void*);
extern void* exitProg(void*);
extern void* openFile(void*);
extern void* createMasterArray(void*);
extern void* unique(void*);
extern void* codelength(void*);
extern void* compStats(void*);
extern void* compressFile(void*);
extern void* decompressFile (void*);
extern void* decompStats(void*);
extern void* compress2(void*);
extern void* compress3(void*);
extern void* compress4(void*);
extern void* compress5(void*);
extern void* compress6(void*);
extern void* compress7(void*);
extern void* decompress2(void*);
extern void* decompress3(void*);
extern void* decompress4(void*);
extern void* decompress5(void*);
extern void* decompress6(void*);
extern void* decompress7(void*);
extern void* findIndex(void*);
extern void* (*fptr[NOF])(void*);
