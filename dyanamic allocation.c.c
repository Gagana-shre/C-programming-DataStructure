#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char *name;
  name=malloc(5);
  name=realloc(name,10);
  strcpy(name,"gagana");
  printf("%s",name);
  return 0;
}