#include <stdio.h>

int main()
{
    printf("Here's your stupid pattern \n\n\n");
    int i,j;
    for (i=1;i<=5;i++)
    {
        for (j=5;j>=1;j--)
        {
            if (j == i)
            printf("   *");
            else
            printf("%4d",j);
        }
        printf("\n");
    }

return 0;
}
