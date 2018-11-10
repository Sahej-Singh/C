#include <stdio.h>

int main()
{
    int n,start,i;
    printf("Enter no. of days in month and starting day: ");
    scanf("%d%d",&n,&start);
    for (i=1; i<=start;i++)
    {
        printf("    ");
    }
    for (i=1;i<=7-start;i++)
        printf("%4d",i);
    for (i=8-start;i<=n;i++)
    {
        printf("%4d",i);
        if (i%(8-start)==0)
            printf("\n");
    }
return 0;
}
