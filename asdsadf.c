#include <stdio.h>

int main()
{
    int a,b,i;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        for (i=b;i>0;i--)
        {
            if (a%i==0 && b%i==0)
            {
                printf("GCD is %d\n",i);
                break;
            }
        }
    }
    if (b>a)
    {
        for (i=a;i>0;i--)
        {
            if (a%i==0 && b%i==0)
            {
                printf("GCD is %d\n",i);
                break;
            }
        }
    }
return 0;
}
