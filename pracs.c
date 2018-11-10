#include <stdio.h>

int main()
{
    int i,j,q,w,z,x;
    int a[4][4] =   {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    //reversing array
    int b[4][4];
    for (i=0;i<4;i++)
        {for (j=0;j<4;j++)
            {
                b[j][3-i] = a[i][j];
            }

        }
    printf("%3d\n\n",b[1][3]);
    printf("%3d\n\n",a[0][0]);
    for (z=0;z<4;z++)
    {
        for (x=0;x<4;x++)
        {
            printf("%3d",a[z][x]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (q=0;q<4;q++)
    {
        for (w=0;w<4;w++)
        {
            printf("%3d",b[q][w]);
        }
        printf("\n");
    }
    return 0;

}
