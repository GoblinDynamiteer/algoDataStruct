TARGET = linkedlist
LIBS =
CC = gcc
CFLAGS = -g -Wall
SUBDIR =
SRC = main.c
OBJ = main.o

all: cleantarget compile run

compile: main.o
	$(CC) $(OBJ) -o $(TARGET)

main.o : main.c
	$(CC) -c main.c

clean:
	-rm -f *.o
	-rm -f *.exe

cleantarget:
	-rm -f *.exe

run:
	.\$(TARGET)
