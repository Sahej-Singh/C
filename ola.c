#include <stdio.h>

int main()
{
    int i,j;
    printf("Enter no.: ");
    scanf("%d",&i);
    for (j=i+1;;j++)
    {
        if (j%7==0){
            printf("ola %d",j);
            break;

    }}
return 0;
}
