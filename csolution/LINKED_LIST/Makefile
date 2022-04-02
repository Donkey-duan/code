all: a.out

a.out: list.o main.o
	gcc list.o main.o -o a.out

list.o: list.c list.h
	gcc -c list.c

main.o: main.c list.h
	gcc -c main.c

clean:
	rm -f a.out *.o
