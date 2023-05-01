/* 
Excercie 1-12. Write a program that prints its input on word per line
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while((c =getchar()) != EOF) {
    if(c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
      putchar(c);
    }
    else if (state == OUT) {
      state = IN;
      putchar('\n');
      putchar(c);
      
    } else {
      putchar(c);
    }
  }
}
