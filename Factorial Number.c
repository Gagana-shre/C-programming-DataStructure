#include <stdio.h>
int main()
{
  int i=1, n, factorial=1;
  printf("Enter the positive Number\n");
  scanf("%d",&n);
  do{
    factorial=factorial*i;
    i++;
  }while(i<=n);
    printf("Factorial of %d is %d\n",n,factorial);
  }
