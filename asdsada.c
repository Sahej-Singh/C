#include <stdio.h>

int main(void)
{
    int n, i = 1;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    while (i * i <= n)
    {
        if ((i * i) % 2 == 0)
            printf("%d\n", i * i);
        i++;
    }

    printf("\n");

    return 0;
}
