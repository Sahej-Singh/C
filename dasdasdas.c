#include <stdio.h>

int main(void)
{
    int m, n, remainder;

    printf("\nEnter two integers: ");
    scanf("%d %d", &m, &n);

    do
    {
        remainder = m % n;
        m = n;
        n = remainder;
    } while (n != 0);

    printf("Greatest common divisor: %d\n\n", m);

    return 0;
}
