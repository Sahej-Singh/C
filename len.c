#include <stdio.h>

int main()
{
    char ch;
    int len = 0;

    printf("Enter a mess: ");
    ch = getchar();
    while (ch != '\n'){
        len++;
        ch = getchar();
    }
printf("%d \n",len);
return 0;
}
