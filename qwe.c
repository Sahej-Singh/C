#include <stdio.h>

int main()
{
    int a,b,c;
    a = 4;
    b = a++ + a++;
    printf("%d\n", b);
    b = a*a++;
    printf("%d\n", b);
    b = a++;
    printf("%d\n", b);
    return 0;
}

