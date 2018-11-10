#include <stdio.h>
#define n 7
int main()
{
    int a[n],i,temp,j;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
for(j=0;j<n;j++)
{for (i=0;i<n;i++)
{
    if (a[i]>a[i+1])
    {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;

    }
}
}
for (i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}

return 0;
}
