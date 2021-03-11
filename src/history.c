#include "history.h"

List *init_history(){
  Item *head = malloc(sizeof(Item));
  head->id=0;
  head->next=NULL;
  head->str="First";
  List *list = malloc(sizeof(List));
  list->root=head;
  return list;
}

void add_history(List *list, char *str){
  Item *current= list->root;
  int id = 1;
  while(current -> next != NULL)
    {
      current = current->next;
      id++;
    }
  current->next = (Item*)malloc(sizeof(Item));
  current=current->next;
  current->id = id;
  current->str = str;
  current->next =NULL;
}

char *get_history(List *list, int id){
  Item *current = list->root;
  if(id==0)
    {return current->str;}

  char *NS = {"No String"}; 
  int number = current->id;
  while(number<id)
    {
      current=current->next;
      int number = current->id;
      printf("%d\n",number);
      if(++number==id)
	{
	  return current->next->str;
	}
    }
  return NS;
  
}

void print_history(List *list){
  Item *current = list->root;
  while(current->next!=NULL)
    {
      printf("%d: %s \n",current->id,current->str);
      current =current->next;
    }
  printf("%d: %s ",current->id,current->str);
}

void free_history(List *list)
{
  Item *current = list->root;
  while(current->next!=NULL)
    {
      free(current);
      current = current->next;
    }
  free(current);
  free(list);
}


