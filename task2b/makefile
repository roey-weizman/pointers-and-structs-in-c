all: func
 
func: func.o 
	gcc -Wall  -g  -o out func.o 
func.o : func.c
	gcc -Wall  -g -c func.c
clean:
	rm -f *.o  out
