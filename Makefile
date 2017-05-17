CFLAGS = -Wall -std=c99
CC = gcc
sbengine: sbengine.o
	$(CC) $(CFLAGS) -o sbengine sbengine.o

sbengine.o: sbengine.c
	$(CC) -c sbengine.c
