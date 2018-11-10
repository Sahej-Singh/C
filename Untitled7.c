#include <stdio.h>

int main()
{
  float balance_1, balance_2, balance_3,tax_1,tax_2,tax_3, amount, rate, payment;
  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  tax_1 = (amount-payment)*((rate/12)/100.0f);
  balance_1 = amount - payment + tax_1;
  tax_2 = (balance_1 - payment)*((rate/12)/100.0f);
  balance_2 = balance_1 -payment + tax_2;
  tax_3 = (balance_2 - payment)*((rate/12)/100.0f);
  balance_3 = balance_2 - payment + tax_3;
  printf("%.2f,%.2f,%.2f,",balance_1,balance_2,balance_3);
  return 0;
}
