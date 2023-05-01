/*
Exercise 1-15.
Rewrite the temperature conversion program of Section 1.2 to
use a function for conversion.
*/

#include <stdio.h>

int FahrenheitToCelsius(int temperature);

int main() {
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper){
		celsius = FahrenheitToCelsius(fahr);
		printf("%3d\t%3d\n", fahr, celsius);
		fahr += step;
	}
}


int FahrenheitToCelsius(int temperature) {
	return 5 * (temperature - 32) / 9;
}