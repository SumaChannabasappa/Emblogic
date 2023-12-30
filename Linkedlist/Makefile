#!/bin/bash

sll: main.o init.o mainMenu.o exitProgram.o creatLinklist.o creatNode.o insertNode.o deleteNode.o displayLinklist.o sortLinklist.o insertMenu.o insertBeg.o insertEnd.o insertNth.o insertKey.o deleteMenu.o deleteBeg.o deleteEnd.o deleteNth.o deleteKey.o
	gcc -o sll main.o init.o mainMenu.o exitProgram.o creatLinklist.o creatNode.o insertNode.o deleteNode.o displayLinklist.o sortLinklist.o insertMenu.o insertBeg.o insertEnd.o insertNth.o insertKey.o deleteMenu.o deleteBeg.o deleteEnd.o deleteNth.o deleteKey.o

deleteMenu.o: deleteMenu.c headers.h dataStructures.h declarations.h
	gcc -c deleteMenu.c
deleteBeg.o: deleteBeg.c headers.h dataStructures.h declarations.h
	gcc -c deleteBeg.c
deleteEnd.o: deleteEnd.c headers.h dataStructures.h declarations.h
	gcc -c deleteEnd.c
deleteNth.o: deleteNth.c headers.h dataStructures.h declarations.h
	gcc -c deleteNth.c
deleteKey.o: deleteKey.c headers.h dataStructures.h declarations.h
	gcc -c deleteKey.c
sortLinklist.o: sortLinklist.c headers.h dataStructures.h declarations.h
	gcc -c sortLinklist.c
displayLinklist.o: displayLinklist.c headers.h dataStructures.h declarations.h
	gcc -c displayLinklist.c
deleteNode.o: deleteNode.c headers.h dataStructures.h declarations.h
	gcc -c deleteNode.c
insertNode.o: insertNode.c headers.h dataStructures.h declarations.h
	gcc -c insertNode.c
insertMenu.o: insertMenu.c headers.h dataStructures.h declarations.h
	gcc -c insertMenu.c
insertBeg.o: insertBeg.c headers.h dataStructures.h declarations.h
	gcc -c insertBeg.c
insertEnd.o: insertEnd.c headers.h dataStructures.h declarations.h
	gcc -c insertEnd.c
insertNth.o: insertNth.c headers.h dataStructures.h declarations.h
	gcc -c insertNth.c
insertKey.o: insertKey.c headers.h dataStructures.h declarations.h
	gcc -c insertKey.c
creatNode.o: creatNode.c headers.h dataStructures.h declarations.h
	gcc -c creatNode.c
creatLinklist.o: creatLinklist.c headers.h dataStructures.h declarations.h
	gcc -c creatLinklist.c
exitProgram.o: exitProgram.c headers.h dataStructures.h declarations.h
	gcc -c exitProgram.c
mainMenu.o: mainMenu.c headers.h dataStructures.h declarations.h
	gcc -c mainMenu.c
init.o: init.c headers.h dataStructures.h declarations.h
	gcc -c init.c
main.o: main.c headers.h dataStructures.h declarations.h
	gcc -c main.c

clean:
	-rm *.o
	-rm sll
