#include <stdio.h>

int main (){

/*	
	this is the first version from Dennis Ritchie book

	int c;
	c = getchar();
	while(c != EOF){
		putchar(c);
		c = getchar();
	}
*/

// the second version is this:

	int c;

	while((c = getchar()) != EOF){
		putchar(c);
    //printf("Valor de c != EOF: %d\n", c!= EOF);
    //printf("Valor de EOF: %d\n", EOF);
	}

}
