/* double_blanks */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int b, b1;
	b = 0;
	b1 = 0;

	while((b = getchar()) != EOF){
		if (b == ' '){
			if (b1 == ' '){
				// do nothing
			}
			else {
				putchar(b);
			}
		}
		else {
			putchar(b);
		}
		b1 = b;		
	}

	return 0;
}