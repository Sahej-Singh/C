#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    int brr[n][n];
    scanf("%d",&n);
    int arr[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%3d",arr[i][j]);
        }
    printf("\n");
    }
printf("%d\n",sizeof(arr));
//memcpy(brr,arr,sizeof(arr));
//Rotating matrix
for (i=0;i<n;i++)
{
  for (j=0;j<(n/2);j++)
    {arr[i][j] = arr[i][n-j-1];}

}
for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%3d",arr[i][j]);
        }
    printf("\n");
    }

}
