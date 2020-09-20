#include<stdio.h>
int main()
{
    int n,a[20][20];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            if (j == 0 || j == i)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}