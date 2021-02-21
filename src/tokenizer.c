#include <stdio.h>
#include "tokenizer.h"

int space_char(char c){ 
  if(c == ' ' || c == '\t' || c == '\n')
    {return 1;}
  return 0;
}

int non_space_char(char c){
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
  while(non_space_char(*str))
    {str++;}
  return str;
}

int count_words(char *str){
  int count = 0;
  while(*str != '\n')
    {
      word_start(str);
      count++;
      word_end(str);
      
    }
  return count;
}
