all: myStr.o
	gcc myStr.o

run:
	./a.out

myStr.o: myStr.c myStr.h
	gcc -c -w myStr.c myStr.h
