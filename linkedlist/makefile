TARGET = linkedlist
LIBS =
CC = gcc
CFLAGS = -g -Wall
SUBDIR =
SRC = main.c sl_list.c
OBJ = main.o sl_list.o

all: cleantarget compile run

compile: main.o sl_list.o
	$(CC) $(OBJ) -o $(TARGET)

main.o : main.c
	$(CC) -c main.c

sl_list.o : sl_list.c
	$(CC) -c sl_list.c

clean:
	-rm -f *.o
	-rm -f *.exe

cleantarget:
	-rm -f *.exe

run:
	.\$(TARGET)
