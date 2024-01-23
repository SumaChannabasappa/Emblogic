#! bin/bash

CC=gcc
CF=-c
DF=-DDEBUG

adder: adder.o vThread.o
	${CC} -o adder adder.o vThread.o

adder.o : adder.c headers.h declarations.h
	${CC} ${CF} ${DF} adder.c

vThread.o : vThread.c headers.h declarations.h
	${CC} ${CF} ${DF} vThread.c
