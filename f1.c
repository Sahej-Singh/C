#include <stdio.h>

int main()
{
    float n,a,i;
    printf("Enter no.: ");
    scanf("%f", &n);
    for (i=1; i <= n;i++)
    {
        for (a=1;a <=i/2+1;a++)
        {
           if (i/(a*a) == 1)
               {
                   printf("%.f\n", a*a);
               }
        }
    }
return 0;
}
