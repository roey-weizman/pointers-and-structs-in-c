#include <stdio.h>
int main(){
	int iarray[] = {1,2,3};
	char carray[] = {'a','b','c'};
	int* iarrayPtr=&iarray;
	char* carrayPtr=&carray;
	for(int i=0;i<3;i=i+1){
	printf("%d %c \n",*iarrayPtr+i,*carrayPtr+i);}
    
}