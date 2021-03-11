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
  return str;
    
}
//str is assumed to be pointing to a non space char
char *word_end(char *str){
  str = word_start(str);
  int number=0;
  while(non_space_char(*str))
    {
      str++;
      number++;
    }
  return str;
}

int count_words(char *str){
  int count = 0;
  while(*str != '\n')//looks for end of string
    {
      str = word_end(str);//finds the end of a word and points a pointer at it 
      count++; //counter
    }
  return count;
}

char *copy_str(char *inStr, short len)
{
  char *copy =  malloc((len+1)*sizeof(char));
    int counter = 0;
  while(counter<len)
    {
      copy[counter] =inStr[counter];
      counter++;
    }
  copy[counter]='\0';
  return copy;
}

char **tokenize(char *str)
{
  int count = count_words(str)
  char **tokenized= (char**)malloc((count+1) * sizeof(char*));
  char *begin, *end;
  int length = 0;
  begin = word_start(str);
  int read = 0;
  while(read<=count_words(str))
    {
      end = word_end(begin);
      length = end-begin;
      tokenized[read] = copy_str(begin,length);
      begin = word_start(end);

      if(read==count_words(str))
	{tokenized[read]="\0";}
      
      read++;
    }
  return tokenized;
}
void print_token(char **tokens)
{printf("\n");
  for(int t=0; tokens[t]!="\0";t++)
    {printf("Print tokens: %s \n",tokens[t]);}
}
void free_tokens(char **tokens)
{
  int t =0;
  while(tokens[t])//Free individual words
    {
      free(tokens[t]);
      t++;
    }
  free(tokens);//Free all tokens
}
