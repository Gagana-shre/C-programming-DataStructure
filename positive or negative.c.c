#include <stdio.h>
int main(){
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  if(n<=0)
    printf("the number is negative");
  else
    printf("the number is positive");
  return 0;
}