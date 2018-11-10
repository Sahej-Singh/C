#include <stdio.h>

int main()
{
  int amount, bill_20, bill_10, bill_5, bill_1;
  printf("Enter amount: ");
  scanf("%d", &amount);
  bill_20 = amount/20;
  bill_10 = (amount - amount/20*20)/10;
  bill_5 = (amount - amount/20*20 - (amount - amount/20*20)/10*10)/5;
  bill_1 = (amount - amount/20*20 - ((amount - amount/20*20)/10)*10 - ((amount - amount/20*20 -(amount - amount/20*20)/10*10))/5*5);
  printf("%d,%d,%d,%d,",bill_20, bill_10, bill_5, bill_1);
  return 0;

}
