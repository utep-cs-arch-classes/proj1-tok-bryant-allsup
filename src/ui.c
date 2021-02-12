#include <stdio.h>
#define limit 100

void main()
{
  int count = 0;
  char word[limit];
  char c;
  while(1){
    while((c = getchar()) != '\n')
      {
	word[count] =putchar(c);
	count++;
      }
    printf("Printing Word: %s",word);
    printf("\n");
  }
}
