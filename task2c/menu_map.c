#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char quit(char c){
	exit(c);
} /* Gets a char c, and ends the program using c as the return value */

 
int main(int argc, char **argv){
quit('a');
}