/*
Exercise 1-14
Write a program to print a histogram of the frequencies of
different characters on its input.

I learned how to work with size of to programatically get
the size of char to calculate the size of the array to 
store the histogram of chars
*/

#include <stdio.h>
#include <math.h>

#define AMOUNT_CHARACTERS ((unsigned long) pow(2, (sizeof(char) * 8)))

int main() {
	unsigned long charactersHistogram[AMOUNT_CHARACTERS];
	for (unsigned long i = 0; i < AMOUNT_CHARACTERS; ++i)
	{
		charactersHistogram[i] = 0;
	}

	unsigned long charLengthBytes = sizeof(char);
	unsigned long charLengthBits = charLengthBytes * 8;
	unsigned long range = pow(2,charLengthBits);
	printf("size of char: %lu bytes (%lu bits) range %lu arrLength %lu \n", 
		charLengthBytes, charLengthBits, range, AMOUNT_CHARACTERS);

	int c;
	while((c=getchar())!=EOF)
	{
		++charactersHistogram[c];
	}
	for (int i = 0; i < AMOUNT_CHARACTERS; ++i)
	{
		if(charactersHistogram[i]>0)
		{
			printf("%c %3d ", i, i);
			for (int j = 0; j < charactersHistogram[i]; ++j)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	return 0;
}
