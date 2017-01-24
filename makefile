TARGET = algo_assign01
LIBS =
CC = gcc
CFLAGS = -g -Wall
SUBDIR = assignments\ass01
SRC = $(wildcard *.c) $(wildcard $(SUBDIR)/*.c)

all:
	$(CC) $(SRC) -o $(TARGET) $(LIBS)

clean:
	-rm -f *.o
	-rm -f $(TARGET).*

run:
	.\$(TARGET)
