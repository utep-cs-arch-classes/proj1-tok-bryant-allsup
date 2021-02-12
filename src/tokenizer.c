#define "ui.c"
#define "tokenizer.h"

int space_char(char c)
{
  if(c == ' '||'\t'||'\n')
    return 1;
  return 0;
}

int non_space_char(char c)
{
  if(c == ' '||'\t'||'\n')
    return 0;
  return 1;
}
