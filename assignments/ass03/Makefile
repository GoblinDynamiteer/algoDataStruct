OBJ	= sort.o
CC	= gcc -g

main.exe: main.c $(OBJ) sort.h
	$(CC) -o $@ $< $(OBJ) -lKernel32
main: main.c $(OBJ) sort.h
	$(CC) -o $@ $< $(OBJ)
.c.o:
	$(CC) -c $<	
clean:
	rm -f *.o
	rm -f main
