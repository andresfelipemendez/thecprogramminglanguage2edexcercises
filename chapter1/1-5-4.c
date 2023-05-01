#include <stdio.h>

int main(int argc, char const *argv[])
{

	const int in = 1;
	const int out = 0;

	int c, nl, nw, nc, state;

	state = out;

	nl = nw = nc = 0;

	while ((c=getchar()!=EOF)){
		++nc;
		if(c=='\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t')
			state = out;
		else if(state == out){
			state = in;
			++nw;
		}
	}

	printf("%d %d %d\n", nl,nw,nc);
	return 0;
}