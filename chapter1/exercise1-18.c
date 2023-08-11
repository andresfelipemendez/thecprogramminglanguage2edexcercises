#include "../utest.h"

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int _getline(char line[], int maxline);
void copy(char to[], char from[]);


void trimTrailingBlanks(char* input, size_t length) {

	printf("length : %zu \n", length);

	for(int i = length-1; i >= 0; --i) {
		if(input[i] != '\t' && input[i] != ' ') {
			printf("exit at: %u, input at index is \"%i\" \n", i, input[i]);
			input[i+1] = '\0';
			break;
		}
	}
}

UTEST(foo, bar) {
	char testInput[] = "s	";
	trimTrailingBlanks(testInput, strlen(testInput));
	printf("%s&\n",testInput);
	ASSERT_TRUE(strcmp(testInput, "s") == 0);
}

UTEST(foo, bar1) {
	char testInput[] = "s			";
	trimTrailingBlanks(testInput, strlen(testInput));
	printf("%s&\n",testInput);
	ASSERT_TRUE(strcmp(testInput, "s") == 0);
}


UTEST(foo, bar2) {
	char testInput[] = "s 	 	 		      	 	 	 	";
	trimTrailingBlanks(testInput, strlen(testInput));
	printf("%s&\n",testInput);
	ASSERT_TRUE(strcmp(testInput, "s") == 0);
}

UTEST_STATE();

int main (int argc, const char *const argv[])
{
	
	return utest_main(argc, argv);
  
	int len;
	int max;
	char line [MAXLINE];
	char longest [MAXLINE];

	max = 80;
	while((len = _getline(line, MAXLINE)) > 0) {
		if (len > max) {
			printf("%s %d\n", line, len);
		}
	}
	return 0;
}

int _getline(char s[], int lim)
{
	int c, i = 0;	 
	while((c = getchar()) != EOF && c != '\n') {
		if( i < (lim - 1)) { 
			s[i] = c;
		}
		++i;
	}
	if(i >= lim)
		s[lim - 1] = '\0';
	else
		s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i = 0;

	while((to[i] = from[i]) != '\0') {
		++i;
	}
}