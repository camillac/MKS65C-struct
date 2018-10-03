compile: struct.o
	gcc struct.o

run: a.out
	./a.out

struct.o: struct.c
	gcc -c struct.c

clean:
	rm *.o a.out
