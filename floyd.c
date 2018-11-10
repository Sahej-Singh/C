#include <stdio.h>

int main()
{
    int i,j;
    printf("Floyd's triangle \n\n ");
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
           if (i%2==0)
           {
            if (j%2==0)
            {printf(" 1");}
            else
            {printf(" 0");}
            if (j==i)
                printf("\n ");
           }
           else{
            if (j%2==0)
            {printf(" 0");}
            else
            {printf(" 1");}
            if (j==i)
                printf("\n ");
           }
        }
    }

return 0;
}
