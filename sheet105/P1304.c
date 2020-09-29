#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prim[10000];
void creat(int x)
{
    int k = 0, flag = 1;
    prim[k] = 2;
    k++;
    for (int i = 3; i <= x; i++)
    {
        flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            prim[k] = i;
            k++;
        }
    }
}
int main()
{
    int n;
    int mark = 1;
    scanf("%d", &n);
    creat(n);
    for (int i = 4; i <= n; i += 2)
    {
        mark = 1;
        for (int j = 0; j < n - 1; j++)
        {
            if (!mark)
            {
                break;
            }
            for (int k = j; k < n; k++)
            {
                if (prim[j] + prim[k] == i)
                {
                    printf("%d=%d+%d\n", i, prim[j], prim[k]);
                    mark = 0;
                    break;
                }
            }
        }
    }
    return 0;
}