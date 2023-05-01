/* 
Exercise 1-13
Write a program to print a histogram of the lengths of words in its input.
It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging

according to wikipedia the largest word length its 45 letters
https://en.wikipedia.org/wiki/Longest_word_in_English#:~:text=The%20longest%20word%20in%20any,is%20the%20same%20as%20silicosis.
pneumonoultramicroscopicsilicovolcanoconiosis	45	The disease silicosis	Longest word in a major dictionary[6]
*/

#include <stdio.h>

#define LARGEST_WORD_LENGTH 45
#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
	int c, wondLength, state;
	int wordshistogram[LARGEST_WORD_LENGTH];

	state = OUT;
	wondLength = 0;
	for(int i = 0; i < LARGEST_WORD_LENGTH; ++i)
		wordshistogram[i] = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if(wondLength <= LARGEST_WORD_LENGTH)
				++wordshistogram[wondLength];
		} 
		else if (state == OUT)
		{
			wondLength = 0;
			state = IN;
		} else {
			++wondLength;
		}
	}

	for (int i = 0; i < LARGEST_WORD_LENGTH; ++i)
	{
		printf("%2d ",i + 1);
		for (int j = 0; j < wordshistogram[i]; ++j)
		{
			putchar('#');
		}
		putchar('\n');
	}

	return 0;
}