/*
Section 1.9 Character Arrays
*/

#include <stdio.h>
#define MAXLINE 1000 /* Maximum input line size */

// original name from the book conflics with apple SDK
int _getline(char line[], int maxline);
void copy(char to[], char from[]);

int main() 
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */

	max = 0;
	while((len = _getline(line,MAXLINE)) > 0)
		if(len > max) {
			max = len;
			copy(longest, line);
		}
	if(max >0) /* there was a line */ /*reminds me of the excercise 1-11 test cases */
		printf("%s", longest);
	
	return 0;

}

/* getline: read a line into s, return length */
int _getline(char s[], int lim)
{
	int c, i; 
	// I believe this -1 its to leave space for the null terminator
	for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy `from` into `to`; assume is big enough */
void copy(char to[], char from[])
{
	int i;

	i=0;
	// what a weird patter, similar to c = getchar() asigns and evals
	// why not a for loop?
	while((to[i] = from[i]) != '\0')
		++i;
}

