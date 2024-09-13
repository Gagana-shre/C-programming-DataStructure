#include<stdio.h>
int main()
{
  FILE *fp;
  char c[100];
  fp=fopen("Gaganadrakshu.txt","r");
  fgets(c,7,fp);
  printf("charcter is %s",c);
  fclose(fp);
  return 0;
}