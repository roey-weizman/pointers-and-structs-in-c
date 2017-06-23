#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 char censor(char c) {
  if(c == '!')
    return '.';
  else
    return c;
}

char encrypt(char c){
	if((int)c >=0x20 && (int)c <= 0x7E)
		return c+3;
	else return c;
}
 /* Gets a char c and returns its encrypted form by adding 3 to its value. 
          If c is not between 0x20 and 0x7E it is returned unchanged */
char decrypt(char c){
	if((int)c >=0x20 && (int)c <= 0x7E)
		return c-3;
	else return c;
} /* Gets a char c and returns its decrypted form by reducing 3 to its value. 
            If c is not between 0x20 and 0x7E it is returned unchanged */
char xprt(char c){
	printf("0x%X\n", c);
	return c;
} /* xprt prints the value of c in a hexadecimal representation followed by a 
           new line, and returns c unchanged. */
char cprt(char c){
	if((int)c >=0x20 && (int)c <= 0x7E)
		printf("%c\n", c);
	else printf(".\n");
	return c;

	
} /* If c is a number between 0x20 and 0x7E, cprt prints the character of ASCII value c followed by a new line. 
                    Otherwise, cprt prints the dot ('.') character. After printing, cprt returns the value of c unchanged. */
char my_get(char c){
	char f=fgetc(stdin);
	if(f!='\n')
		return f;
	else return 0;
} /* Ignores c, reads and returns a character from stdin using fgetc. */
char quit(char c){
	exit(c);
}
char* map(char *array, int array_length, char (*f) (char)){
  char* mapped_array = (char*)(malloc(array_length*sizeof(char)));
  char c;
  for(int i=0;i<array_length;i++){
  	c=f(array[i]);
  	if(c==0) break;
  	mapped_array[i]=c;

  }
return mapped_array;}

typedef struct fun_desc {
 	char *name;
  	char (*fun)(char);
	}fun_desc ;
int main(){
	
	char myString[5]; int bounds=7;
	myString[0] = '\0'; char* tmp;
	struct fun_desc menu[] = { { "Censor", &censor }, { "Encrypt", &encrypt }, { "Decrypt", &decrypt }, { "Print hex", &xprt } , { "Print string", &cprt }, { "Get string", &my_get },{ "Quit", &quit },{ NULL, NULL } };	
	while(1){
	printf("Please choose a function:\n");
	for(int i=0;i<bounds;i++){
		printf("%d) %s\n",i,menu[i].name);
	}
	int n; 
	printf("Option: ");
	n=(getc(stdin)-'0');
	if(n>=0&&n<=bounds)
		printf("Within bounds\n");
	else {printf("Not within bounds");return -1;}
	getc(stdin);
	tmp=map(myString,5,menu[n].fun);
	for(int j=0;j<5;j++){
		if(tmp[j]=='\0')
			break;
		myString[j]=tmp[j];
	}

	printf("DONE.\n\n");
	}
	return 0;
}
