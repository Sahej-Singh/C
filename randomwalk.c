#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
/* 0 LEFT
*  1 DOWN
*  2 RIGHT
*  3 UP        */
int main()
{
    bool seen[10][10] = {{0}};
    char arr[10][10];
    int move[10],skip=0;
    int i,j;
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            arr[i][j] = '.';
        }
    }

for (i=0;i<10;i++)
{
    for (j=0;j<10;j++)
    {
        printf("%2c",arr[i][j]);
    }
    printf("\n");
}
printf("\n\n");
srand(time(0));
for (i=0;i<20;i++)
{
    move[i] = rand()%4;
}
for (i=0;i<20;i++)
{
        printf("%2d",move[i]);
}
printf("\n\n");

int row = 0, col = 0;
arr[row][col] = 'A';
seen[row][col] = 1;

for (i=0;i<9+skip;i++)
{
    if (move[i] == 0 )
    {
        //LEFT
        if(seen[row][col-1] == 1 || col - 1 < 0)
        {
            skip++;
            continue;
        }

        arr[row][col - 1] = ('A' + 1 + i - skip);
        col--;
        seen[row][col] = 1;

    }
    else if (move[i] == 1 )
    {
        if (seen[row+1][col] == 1 || row + 1 > 9)
        {
            skip++;
            continue;
        }
        //DOWN
        arr[row+1][col] =('A' + 1 + i - skip);
        row++;
        seen[row][col] = 1;
    }
    else if (move[i] == 2 )

    {
        if (seen[row][col+1] == 1 || col + 1 > 9)
            {
                skip++;
                continue;
            }

        //RIGHT
        arr[row][col+1] =('A' + 1 + i - skip);
        col++;
        seen[row][col] = 1;
    }
    else {
        if (seen[row-1][col] == 1 || col + 1 > 9)
           {
            skip++;
            continue;}
        //UP
        arr[row-1][col] = ('A' + i + 1 - skip);
        row--;
        seen[row][col] = 1;
    }
}
for (i=0;i<10;i++)
{
    for (j=0;j<10;j++)
    {
        printf("%2c",arr[i][j]);
    }
    printf("\n");
}
return 0;
}
