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
  if(oper=='+')
  {
    printf("The sum is %d\n",a+b);
  }else if(oper=='-'){
    printf("The difference is %d\n",a-b);
  }else if(oper=='*'){
    printf("The product is %d\n",a*b);
  }else if(oper=='/'){
    if(b!=0){
      printf("The quotient is %d\n",a/b);
    }else{
      printf("Division by zero is not allowed\n");
    }
}
else{
    printf("Invalid operation\n");
    }
}