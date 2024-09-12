#include <stdio.h>
void test(int num);
int main()
{
int num;
  printf("Enter a Number\n");
  scanf("%d",&num);
  test(num);
  return 0;
} 
 void test(int num){

  if(num%2==0)
    printf("%d is Even Number",num);
      else{
      printf("%d is odd Number",num);
      }
}

  
