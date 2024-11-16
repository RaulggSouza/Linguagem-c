CC = gcc
CFLAGS = -Wall -Wextra

all: G018

G018: main.o funcoes.o
	$(CC) $(CFLAGS) -o G018 main.o funcoes.o

main.o: main.c funcoes.h
	$(CC) $(CFLAGS) -c -o main.o main.c

funcoes.o: funcoes.c funcoes.h
	$(CC) $(CFLAGS) -c -o funcoes.o funcoes.c

clean:
	rm -f G018 main.o funcoes.o