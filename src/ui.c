#include <stdio.h>
#include "tokenizer.c"
#define limit 100

void main()
{
  int count = 0;
  char word[limit] ="";
  char c;
  int boolean = 1;
  printf("*");
  while (boolean){
    
    while((c = getchar()) != '\n') {
      word[count] = putchar(c);
      if(c == '1')
	{boolean = 0;}//shuts off while loop
      count++;
    }
    word[count]='\n'; //end of getchar notification
    printf("%d",count_words(word));
    printf("\n*");
    count = 0;//reset word
  }
}
