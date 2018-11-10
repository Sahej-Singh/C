#include <stdio.h>

int main()
{
    char up;
    float a =4.33;
    int b = 3.3;
    double c;
    printf("%.2f\n", a+b);
    printf("%.2f\n", a*b);
    printf("%.2f\n", a/b);
    up = getchar();
    putchar(up);
    return 0;
}
