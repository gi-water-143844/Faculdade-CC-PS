CC = gcc
CFLAGS = -Wall

all: teste_map draw_map

teste_map: map.o teste_map.o
	$(CC) map.o teste_map.o -o teste_map

draw_map: map.o rpng.o draw_map.o
	$(CC) map.o rpng.o draw_map.o -o draw_map

map.o: map.c map.h
	$(CC) $(CFLAGS) map.c -c

rpng.o: rpng.c rpng.h
	$(CC) $(CFLAGS) rpng.c -c

teste_map.o: teste_map.c map.h
	$(CC) $(CFLAGS) teste_map.c -c

draw_map.o: draw_map.c map.h
	$(CC) $(CFLAGS) draw_map.c -c

clean:
	rm teste_map draw_map *.o
