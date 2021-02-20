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
  return *str;
    
}
//str is assumed to be pointing to a non space char
char *word_end(char *str){
  while()
}

int count_words(char *str){
  
}
