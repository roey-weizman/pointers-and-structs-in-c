all: map
 
map: mapping.o 
	gcc -Wall  -g  -o map mapping.o 
mapping.o : mapping.c
	gcc -Wall  -g -c mapping.c
clean:
	rm -f *.o  map
