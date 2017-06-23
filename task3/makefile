all: menu_map
 
menu_map: menu_map.o 
	gcc -Wall  -g  -o menu_map menu_map.o 
menu_map.o : menu_map.c
	gcc -Wall  -g -c menu_map.c
clean:
	rm -f *.o  menu_map
