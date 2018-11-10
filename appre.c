int main(void)
{
    int precision, i;
    float end_result, factorial, p;

    printf("\nEnter a number: ");
    scanf("%d", &precision);

    end_result = 1;

    printf("\ne = 1");
    for (i = 1; i <= precision; i++)
    {
        /* calculating the factorial */
        factorial = p = i;
        while (p > 0)
        {
            if (p - 1 == 0) break;
            factorial *= --p;
        }

        end_result += (1 / factorial);
        printf(" + 1/%d!", i);
    }

    printf(" = %.4f\n\n", end_result);

    return 0;
}
