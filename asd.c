#include <stdio.h>

int main()
{
    _Bool flag;
    flag = 0;
    int a,i;
    printf("Enter no.: ");
    scanf("%d", &a);
    for (i = 2; i<=a/2; i++)
        if (a%i==0)
        {
            flag = 1;
            break;
        }
if (!flag)
{
    for (i=1;i<=10;i++)
    {
        printf("%5d\n",a*i);
    }
}
return 0;
}
