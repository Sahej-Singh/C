#include <stdio.h>

int main()
{
  float amount, tax_amount;
  printf("Enter amount: ");
  scanf("%f", &amount);
  tax_amount = amount*1.05;
  printf("%.3f", tax_amount);

}
