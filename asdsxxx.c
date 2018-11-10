#include <stdio.h>

int main()
{
    int arr[5][5],i,j,r1,r2,r3,r4,r5,c1,c2,c3,c4,c5;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
r1 = 0;
r3 = 0;
     r2 = 0;
     r4 = 0;
     r5 = 0;
for (i=0;i<5;i++)
{
    for (j=0;j<5;j++)
    {
        if (i==0)
        {

            r1 += arr[i][j];
        }
        if (i==1)
        {

            r2 += arr[i][j];
        }
        if (i==2)
        {

            r3 += arr[i][j];
        }
        if (i==3)
        {

            r4 += arr[i][j];
        }
        if (i==4)
        {

            r5 += arr[i][j];
        }
    }
}
printf("\nRow Totals: %3d%3d%3d%3d%3d",r1,r2,r3,r4,r5);

}
