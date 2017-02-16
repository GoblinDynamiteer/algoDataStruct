main: main.c tree.h tree.o
	gcc -o $@ $< tree.o -Wall

tree.o: tree.c tree.h
	gcc -c $< -Wall
