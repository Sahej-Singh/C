#include <stdio.h>

int main()
{
    double i,j;
    for (i=1;i<=4;i++)
    {
        printf("%.f\n",pow((pow(10,i)-1)/9,2));
    }
return 0;
}
