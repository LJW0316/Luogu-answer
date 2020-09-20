#include <stdio.h>

int a[1500][1500] = {0};
int m, n, k, sum = 0, x, y;

void light1(int x, int y)
{
    a[x][y] = 1;
    a[x - 1][y] = 1;
    a[x - 2][y] = 1;
    a[x + 1][y] = 1;
    a[x + 2][y] = 1;
    a[x][y - 1] = 1;
    a[x][y - 2] = 1;
    a[x][y + 1] = 1;
    a[x][y + 2] = 1;
    a[x + 1][y + 1] = 1;
    a[x + 1][y - 1] = 1;
    a[x - 1][y - 1] = 1;
    a[x - 1][y + 1] = 1;
    return;
}

void light2(int x, int y)
{
    for (int i = x - 2; i <= x + 2; i++)
    {
        for (int j = y - 2; j <= y + 2; j++)
        {
            a[i][j] = 1;
        }
    }
    return;
}

int main()
{

    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);
        light1(x + 2, y + 2);
    }
    for (int i = 0; i < k; i++)
    {
        scanf("%d %d", &x, &y);
        light2(x + 2, y + 2);
    }
    for (int i = 3; i <= n + 2; i++)
    {
        for (int j = 3; j <= n + 2; j++)
        {
            if (!a[i][j])
            {
                sum++;
            }
        }
    }
    printf("%d", sum);
    return 0;
}