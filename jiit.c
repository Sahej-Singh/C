#include <stdio.h>
#include <ctype.h>

#define BUFFER 20

int main(void)
{
    char first_name_letter, input;
    char last_name[BUFFER] = {0};
    int i = 0;

    printf("\nEnter a first and last name: ");
    scanf(" %c", &first_name_letter);

    while (getchar() != ' ');

    while ((input = getchar()) != '\n' && i < 20)
    {
        if (input != ' ')
        {
            last_name[i] = input;
            i++;
        }
    }

    printf("You entered the name: ");
    for (i = 0; i < BUFFER; i++)
    {
        if (last_name[i] == 0) break;
        printf("%c", last_name[i]);
    }
    printf(", %c.\n\n", first_name_letter);

    return 0;
}
