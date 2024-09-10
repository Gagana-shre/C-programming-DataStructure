#include <stdio.h>

int main() {
  int a,b;
  char oper;
  printf("Enter the Number 1\n");
  scanf("%d",&a);
  printf("Enter the Number 2\n");
  scanf("%d",&b);
  printf("Enter the operation (+,-,*,/,):");
  scanf(" %c",&oper);
  switch(oper)
  {
    case '+':
      printf("The sum is %d\n",a+b);
      break;
    case '-':
      print("The diff is %d\n",a-b);
      break;
    case '*':
      printf("The pro is %d\n",a*b);
      break;
    case '/':
      if(b != 0){
      printf("The div is %d\n",a/b);
      }else{
        printf("Division by zero is not allowed\n");
      }
      break;
    default:
      printf("invalid operation\n");
  }
  return 0;
}
