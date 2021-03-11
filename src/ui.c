#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.c"
#include "history.c"
#define limit 100

void main()
{
  int count = 0;
  List *list =init_history();
  char word[limit] ="";
  char c;
  int boolean = 1;
  printf("*");
  while (boolean){
    
    while((c = getchar()) != '\n') {
      word[count] = putchar(c);//repeats setence back

      
      if(c == '1')
	{boolean = 0;}//shuts off while loop
      count++;
    }

    word[count]='\n'; //end of getchar notification

    if(word[0]=='!')
      {
	char *idc = word;
	idc++;
	int id = atoi(idc);
	char *history = get_history(list, id);
	char **tokens = tokenize(history);
	print_token(tokens);
      }
    else
    {
      printf("\nNumber of Words %d",count_words(word));
      add_history(list,word);
      char **tokens = tokenize(word);
      print_token(tokens);
      print_history(list);
      free_tokens(tokens);
    }
    printf("\n*");
    count = 0;//reset word
  }
  free_history(list);
}
