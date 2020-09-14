#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, a[50][50] = {0},k = 1,x, y;
    scanf("%d",&n);
    x = 1;
    y = (n + 1) / 2;
    a[x][y] = k;
    while (k <= n * n)
    {
        k++;
        if (x == 1 && y != n)
        {
            x = n;
            y = y + 1;
            a[x][y] = k;
            continue;
        }
        if (y == n && x != 1)
        {
            y = 1;
            x = x - 1;
            a[x][y] = k;
            continue;
        }
        if (x == 1 && y == n)
        {
            x = x + 1;
            y = y;
            a[x][y] = k;
            continue;
        }
        if (x != 1 && y != n)
        {
            if (a[x - 1][y + 1] == 0)
            {
                x = x - 1;
                y = y + 1;
                a[x][y] = k;
                continue;
            }
            else
            {
                x = x + 1;
                y = y;
                a[x][y] = k;
                continue;
            } 
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}