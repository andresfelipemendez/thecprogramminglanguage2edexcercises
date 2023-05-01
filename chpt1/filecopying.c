#include <stdio.h>

int main()
{
  int c;
  int t1 = getchar() != EOF;
  while((c = getchar()) != EOF)
    putchar(c);

  int t2 = getchar() != EOF;
  int t3 = EOF;
  printf("%d\t%d\t%d",t1,t2,t3);


}
