#include <stdio.h>
union book{
int num;
char name[20];
float price;
};
int main()
{
  union book hp;
  hp.num=1;
  hp.price=100;
  printf("Book number: %d\n",hp.num);
  printf("Book price: %f\n",hp.price);
}
