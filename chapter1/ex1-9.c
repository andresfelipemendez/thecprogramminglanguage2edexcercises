#include <stdio.h>

int main(int argc, char           const *argv[])
{
	int c, state         = 0;
     
	const       in = 1, out = 0;

	while ((c = getchar(                ))!=EOF){
		if(c != ' '){
			state = out;
			putchar(c);
		}
		if(state == out && c == ' '){
			state = in;
			putchar(c);
		} 
	}
	return 0;
}