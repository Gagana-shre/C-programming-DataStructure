#include<stdio.h>
int main(){
int n, temp,rem,result=0;
printf("Enter the Number\n");
scanf("%d",&n);
temp=n;
while(temp!=0)
  {
    rem=temp%10;
    result=result+rem*rem*rem;
    temp=temp/10;
  }
if(result==n)
  printf("Amstrong Number is %d",n);
else
  printf("Not amstrong Number",n);
  return 0;

  }

