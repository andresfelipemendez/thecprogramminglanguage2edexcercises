#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c, nl;
	int blanks = 0, tabs = 0;
	nl=0;
	while((c=getchar())!= EOF){
		if(c == '\n')
			++nl;
		if(c == '\t')
			++tabs;
		if(c == ' ')
			++blanks;
	}
	printf("lines: %d tabs: %d blanks: %d\n",nl,tabs,blanks);
	
}