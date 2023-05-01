#include <stdio.h>

int main(int argc, char const *argv[])
{
	int c;
	while((c=getchar())!= EOF) {
		
		if(c == '\b') {
			putchar('\b'); // Move the cursor back
            putchar(' ');  // Erase the character on screen
            putchar('\b');
        }
		else if(c == 127 || c == 8) {
			putchar('\b'); // Move the cursor back
            putchar(' ');  // Erase the character on screen
            putchar('\b');
		}
		else if(c == '\\')
			printf("\\\\");
		else if(c == '\t')
			printf("\\t");
		else {
			putchar(c);
			printf("%d %d",c,1);
		}
	}
	
	return 0;
}