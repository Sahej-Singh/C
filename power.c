#include <stdio.h>

int main()
{
    int tot=1,base,exp,i;
    printf("Enter base and exp: \n");
    scanf("%d%d",&base,&exp);
    for (i=1;i<=exp;i++)
    {
        tot *= base;
    }
printf("%d",tot);
return 0;
}
