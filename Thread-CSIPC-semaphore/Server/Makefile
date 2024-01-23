#! /bin/bash

CC=gcc
CF=-c
DF=-DDEBUG

server: server.o init.o creatInfra.o exitServer.o processRequest.o
	${CC} -o server server.o init.o creatInfra.o exitServer.o processRequest.o

processRequest.o: processRequest.c ../Common/headers.h ../Common/dataStructures.h ../Common/defaults.h declarations.h
	${CC} ${CF} ${DF} processRequest.c
exitServer.o: exitServer.c ../Common/headers.h ../Common/dataStructures.h ../Common/defaults.h declarations.h
	${CC} ${CF} ${DF} exitServer.c
creatInfra.o: creatInfra.c ../Common/headers.h ../Common/dataStructures.h ../Common/defaults.h declarations.h
	${CC} ${CF} ${DF} creatInfra.c
init.o: init.c ../Common/headers.h ../Common/dataStructures.h ../Common/defaults.h declarations.h
	${CC} ${CF} ${DF} init.c
server.o: server.c ../Common/headers.h ../Common/dataStructures.h ../Common/defaults.h declarations.h
	${CC} ${CF} ${DF} server.c

clean:
	-rm -f *.o
	-rm server
	unlink requestFIFO
