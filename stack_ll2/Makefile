OBJ	= SL_list.o stack_LL.o stack_arr.o
CC	= gcc

main: main.c $(OBJ) SL_list.h
	gcc -g -o $@ $< $(OBJ)

.c.o:
	gcc -g -c $<	
clean:
	rm -f $(OBJ)
	rm main
