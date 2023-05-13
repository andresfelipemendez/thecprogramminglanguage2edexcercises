/*
Exercise 1-16
Revise the main routine of the longest-line program so it will
correctly print the length of arbitrary long input lines, and as much as possible 
of the text.
*/
#include <stdio.h>
#define MAXLINE 10

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

int main ()
{
	int len;
	int max;
	char line [MAXLINE];
	char longest [MAXLINE];

	max = 0;
	while((len = _getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) {
		printf("%s", longest);
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