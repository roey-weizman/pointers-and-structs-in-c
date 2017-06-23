all: out
 
out: addresses.o 
	gcc -Wall  -g  -o out addresses.o 
addresses.o : addresses.c
	gcc -Wall  -g -c addresses.c
clean:
	rm -f *.o  out
