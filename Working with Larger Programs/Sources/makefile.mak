main: main.o other.o
	gcc -o main main.o other.o
main.o: main.c
	gcc -c main.c
other.o: other.c ../Headers/other.h
	gcc -c other.c