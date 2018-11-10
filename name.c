#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 1, i,j=0;
    char name[40],first_name[20],last_name[20];
    printf("Enter name: \n");
    gets(name);
    for (i=0;i<=strlen(name);i++)
    {
        if (flag)
        {
            first_name[i] = name[i];
        }
        if (name[i] == ' ')
        {
            flag = 0;
        }
        else if (!flag)
        {
            last_name[j] = name[i];
            j++;
        }
    }
printf("%s, %c.",last_name, first_name[0]);
}
