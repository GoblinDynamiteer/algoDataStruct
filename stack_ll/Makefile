main: main.c SL_list.o  SL_list.h stack_ll.o stack_arr.o
	gcc -o main main.c SL_list.o stack_ll.o stack_arr.o
SL_list.o: SL_list.c SL_list.h
	gcc -c SL_list.c
stack_ll.o: stack_ll.c stack_ll.h
	gcc -c stack_ll.c
stack_arr.o: stack_arr.c stack_arr.h
	gcc -c stack_arr.c
