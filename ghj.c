#include <stdio.h>
#include <math.h>

int main()
{
    double y,i,t;
    for (t=-5;t<=5;t=t+0.25)
        {
            y = 2*pow(t,3) - pow(t,2) - 37*t + 36;
            printf("%f\n",y);
        }
return 0;
}
