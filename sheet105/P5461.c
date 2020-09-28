#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int n, m = 1, a[2000][2000];
void make(int x, int l, int r)
{
    if (x == 2)
    {
        a[l][r] = 0;
        return;
    }
    for (int i = 0; i < x / 2; i++)
    {
        for (int j = 0; j < x / 2; j++)
        {
            a[l + i][r + j] = 0;
        }
    }
    make(x / 2, l, r + x / 2);
    make(x / 2, l + x / 2, r);
    make(x / 2, l + x / 2, r + x / 2);
}
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        m = m * 2;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = 1;
        }
    }
    make(m, 0, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}