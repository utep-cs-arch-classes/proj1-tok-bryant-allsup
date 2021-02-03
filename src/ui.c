#include <stdio.h>

char sentence[100];

void main()
{
  printf("*");
  fgets(sentence,100,stdin);
  printf(sentence);
}
