#include <stdio.h>

int main()
{
    char chess[8][8];
    int i,j;
    for (i=0;i<8;i++)
    {
        for (j=0;j<8;j++)
        {
            if ((i+j)%2==0)
                chess[i][j] = 'B';
            else
                chess[i][j] = 'R';
        }
    }
for (i=0;i<8;i++)
    {
        for (j=0;j<8;j++)
        {
            printf("%3c",chess[i][j]);
        }
    printf("\n");
    }
}
