/*
Exercise 1-17
Write a program to print all input lines that are longer than 80 characters.
*/

#include <stdio.h>
#define MAXLINE 1000

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

int main ()
{
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