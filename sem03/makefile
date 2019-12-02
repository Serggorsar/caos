CC=gcc
all: even_make
even_make: even.o extern.o
	$(CC) -o even_make even.o extern.o
even.o: even.c
	$(CC) -c even.c
extern.o: extern.c
	$(CC) -c extern.c
clean:
	rm -rf extern.o even.o
