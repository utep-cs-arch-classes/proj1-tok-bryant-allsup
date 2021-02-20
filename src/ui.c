#include <stdio.h>
#include "tokenizer.c"
#define limit 100

void main()
{
  int count = 0;
  char word[limit];
  char c;
  printf("*");
    while((c = getchar()) != '\n')
      { 
	word[count] = putchar(c);

   
	if( space_char(c) )
	  {printf("This is a space\n");}

	if(non_space_char(c) )
	  {printf(":This is not a space\n");}

	count++;
	
      }
    printf("Printing Word: %s",word);
    printf("\n");
}
