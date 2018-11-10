#include <stdio.h>

int main()
{
    char arr[20] = {[2] = 'a','b','c'};
    int i;
    for (i=0;i<20;i++)
    {
        printf("%c",arr[i]);

    }
}
