all: count
 
count: count-words.o 
	gcc -Wall  -g  -o count count-words.o 
count-words.o : count-words.c
	gcc -Wall  -g -c count-words.c
clean:
	rm -f *.o  count
