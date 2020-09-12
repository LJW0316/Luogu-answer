#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[25][25][25], w, x, h, q, x1, x2, y1, y2, z1, z2, sum;
    scanf("%d %d %d", &w, &x, &h);
    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            for (int k = 1; k <= h; k++)
            {
                a[i][j][k] = 1;
            }
        }
    }
    scanf("%d", &q);
    for (int n = 0; n < q; n++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
                for (int k = z1; k <= z2; k++)
                {
                    a[i][j][k] = 0;
                }
            }
        }
    }
    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            for (int k = 1; k <= h; k++)
            {
                if (a[i][j][k])
                {
                    sum++;
                }
            }
        }
    }
    printf("%d",sum);
    return 0;
}