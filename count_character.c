#include <stdio.h>

int main (){
	
//First way to count_character presented by Ritchie//
/***************************************************/
//	long nc = 0;
//	while (getchar() != EOF){
//		++nc;
//	}
//	printf("%ld\n", nc);
/***************************************************/

//Second way to count_character presented by Ritchie//
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);


}