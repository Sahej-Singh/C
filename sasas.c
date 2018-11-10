#include <stdio.h>
#include <string.h>
int main()
{
    char s[40];
    gets(s);
    printf("%s\n",s);
    float avg;
    int counter = 0,i,len;
    len = strlen(s);
    printf("%d\n",len);
    for (i=0;i<=len;i++)
    {
        if (s[i] == ' ')
        {
            counter++;
        }
    }
printf("%d\n",counter);
avg = ((float)len-(float)counter)/(counter+1);
printf("%f",avg);
return 0;
}
