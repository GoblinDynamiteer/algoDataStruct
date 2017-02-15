main: main.c tree.h tree.o
	echo $@ $<
	gcc -o $@ $<

tree.o: tree.c tree.h
	gcc -c $<
