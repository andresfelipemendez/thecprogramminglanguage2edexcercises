#include <stdio.h>

/*
write a program to copy its inputs to its outputs, 
replacing each tab by '\t', each backspace by '\b',
and each backslash by \\. this makes tabs and backspaces
visible in an unambiguous way.
*/
int main(int argc, char const *argv[])
{
	int c;
	while ((c=getchar())!=EOF){
		switch(c) {
		case '\t':
			printf("\\t");
			break;
		case '\b':
			printf("\\b");
			break;
		case '\\':
			printf("\\\\");
			break;
		default:
			putchar(c);
			break;
		}

	}
	return 0;
}