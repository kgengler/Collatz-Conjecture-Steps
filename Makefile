default: collatz

collatz.o: collatz.c
	gcc -std=c99 -c collatz.c -o collatz.o

collatz: collatz.o
	gcc collatz.o -o collatz

clean:
	-rm -f collatz.o
	-rm -f collatz

