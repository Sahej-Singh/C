#include <stdio.h>

int main(void)
{
    int iNo,month,date,year;
    float uPr;
    printf("Enter item number: \n ");
    scanf("%d", &iNo);
    printf("Enter unit price: \n");
    scanf("%f", &uPr);
    printf("Enter purchase date (mm/dd/yyyy) : \n");
    scanf("%d/%d/%d", &month, &date, &year);
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$ %.2f\t%d/%d/%d",iNo,uPr,month,date,year);
    return 0;
}
