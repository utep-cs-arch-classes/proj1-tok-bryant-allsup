#include <stdio.h>
#include "tokenizer.h"

int space_char(char c){ 
  if(c == ' ' || c == '\t' || c == '\n')
    {return 1;}
  return 0;
}

int non_space_char(char c){
  printf("\n non_space_char: %c",c);
  if(c == ' ' || c == '\t' || c == '\n')
    {return 0;}
  return 1;
}

//str is assumed to be pointing to a space char.
char *word_start(char *str){ //does not increment through word
  while(space_char(*str)){ //no longer space
    str++; //increment pointer
    }
  printf("\n This is word start: %c", *str);
  return str;
    
}
//str is assumed to be pointing to a non space char
char *word_end(char *str){
  str = word_start(str);
  int number=0;
  while(non_space_char(*str))
    {
      printf("\n Incrementing through word: %c",*str);
      str++;
      number++;
      printf("number: %d",number);
    }
  return str;
}

int count_words(char *str){
  int count = 0;
  /*
  if(word_start(str)=='\n') //will handle empty cases
    {
      return 0;
    }
  */
  while(*str != '\n')//looks for end of string
    {
      str = word_end(str);//finds the end of a word and points a pointer at it 
      count++; //counter
    }
  return count;
}
