TARGET = algo_struct
LIBS =
CC = gcc
CFLAGS = -g -Wall
SUBDIR = struct
SRC = $(wildcard $(SUBDIR)/*.c)

all:
	$(CC) $(SRC) -o $(TARGET) $(LIBS)

clean:
	-rm -f *.o
	-rm -f $(TARGET).*

run:
	.\$(TARGET)
