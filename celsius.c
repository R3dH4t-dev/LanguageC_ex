#include <stdio.h>

// Tabela de conversão Fahrenheit - Celsiu: 0 - 300 Fahrenheit 
int main (){
	float fahr, celsius;

	#define LOWER 0 		// lower limit of our table
	#define UPPER 300		// upper limit |
	#define STEP 20 		// step of values in fahr

	for(fahr = LOWER; fahr <= UPPER; fahr += STEP){
		celsius = (fahr - 32.0) * (5.0 / 9.0);
		printf("Fahrenheit:%4.0f\t\tCelsius:%5.1f\n", fahr, celsius);
	}
}




