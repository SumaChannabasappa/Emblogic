#!/bin/bash

stk: main.o init.o exitFunc.o mainMenu.o creatStack.o pushElement.o popElement.o displayStack.o searchStack.o flushStack.o destroyStack.o
	gcc -o stk main.o init.o exitFunc.o mainMenu.o creatStack.o pushElement.o popElement.o displayStack.o searchStack.o flushStack.o destroyStack.o

destroyStack.o: destroyStack.c headers.h declarations.h
	gcc -c destroyStack.c
flushStack.o: flushStack.c headers.h declarations.h
	gcc -c flushStack.c
searchStack.o: searchStack.c headers.h declarations.h
	gcc -c searchStack.c
displayStack.o: displayStack.c headers.h declarations.h
	gcc -c displayStack.c
popElement.o: popElement.c headers.h declarations.h
	gcc -c popElement.c
pushElement.o: pushElement.c headers.h declarations.h
	gcc -c pushElement.c
creatStack.o: creatStack.c headers.h declarations.h
	gcc -c creatStack.c
mainMenu.o: mainMenu.c headers.h declarations.h
	gcc -c mainMenu.c
exitFunc.o: exitFunc.c headers.h declarations.h
	gcc -c exitFunc.c
init.o: init.c headers.h declarations.h
	gcc -c init.c
main.o: main.c headers.h declarations.h
	gcc -c main.c
clean:
	-rm *.o
	-rm stk
