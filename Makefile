sbengine: sbengine.o
	gcc -o sbengine sbengine.o

sbengine.o: sbengine.c
	gcc -c sbengine.c
