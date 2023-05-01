#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, blanks, tabs, newLines;
	blanks = tabs = newLines = 0;

	while ((c = getchar()) != EOF){
		switch(c)
		{
		case ' ':
			++blanks;
		case '\t':
			++tabs;
		case '\n':
			++newLines;
		}
	}
	printf("blanks: %d, tabs: %d, newLines: %d",blanks,tabs,newLines);
	return 0;
}
