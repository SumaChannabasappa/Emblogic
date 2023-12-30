#!/bin/bash

Queue: main.o init.o exitFunc.o mainMenu.o creatQueue.o enQueue.o deQueue.o displayQueue.o searchQueue.o clearQueue.o
	gcc -o Queue main.o init.o exitFunc.o mainMenu.o creatQueue.o enQueue.o deQueue.o displayQueue.o searchQueue.o clearQueue.o

clearQueue.o: clearQueue.c headers.h declarations.h
	gcc -c clearQueue.c
searchQueue.o: searchQueue.c headers.h declarations.h
	gcc -c searchQueue.c
displayQueue.o: displayQueue.c headers.h declarations.h
	gcc -c displayQueue.c
deQueue.o: deQueue.c headers.h declarations.h
	gcc -c deQueue.c
enQueue.o: enQueue.c headers.h declarations.h
	gcc -c enQueue.c
creatQueue.o: creatQueue.c headers.h declarations.h
	gcc -c creatQueue.c
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
	-rm Queue
