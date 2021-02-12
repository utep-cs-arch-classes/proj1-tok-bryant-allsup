#include <stdio.h>


void main()
{
  char c;
  printf("*");
  while(c = getchar() != '\n')
  {
    putchar(c);
  }
}
