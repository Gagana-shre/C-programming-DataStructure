
#include<stdio.h>
int main()
{
  int n,rev=0,digit,temp;
  printf("Enter the number");
  scanf("%d",&n);
  temp=n;
  while(temp!=0){
    
    digit=temp%10;
    rev=rev*10+digit;
    temp=temp/10;
  }
    if(rev==n)
        printf("Given number %d is palindome ",n);
    else
        printf("The given number is not palindrome");
    
} 
