test: test.c SL_list.o SL_list.h array_SLL.o array_SLL.h
	gcc -o $@ $< SL_list.o array_SLL.o
SL_list.o: SL_list.c SL_list.h
	gcc -c $<
array_SLL.o: array_SLL.c array_SLL.h
	gcc -c $<
