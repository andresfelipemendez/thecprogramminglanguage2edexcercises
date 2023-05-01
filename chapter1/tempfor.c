#include <stdio.h>

int main() 
{
  const int lower = 0;
  const int upper = 200;
  const int step = 20;

  for(int fahr = lower; fahr <= upper; fahr += step)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
