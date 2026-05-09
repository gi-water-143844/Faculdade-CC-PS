all: main

main: par.o main.o
	gcc par.o main.o -o main

par.o: par.c par.h
	gcc -Wall par.c -c

main.o: main.c par.h
	gcc -Wall main.c -c

clean:
	rm main par.o main.o
