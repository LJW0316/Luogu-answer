#include <stdio.h>
#define MAXN 10000005
int check(int x)
{
    int n = x, m = 0;
    while (n > 0)
    {
        m = m * 10 + n % 10;
        n = n / 10;
    }
    if (m == x)
        return 1;
    else
        return 0;
}
int main()
{
    int flag[MAXN], prime[MAXN];
    int a, b, n = 0;
    scanf("%d %d", &a, &b);
    if (b > 10000000)
        b = 10000000;
    for (int i = 2; i <= b; i++)
        flag[i] = 1;
    flag[0] = 0;
    flag[1] = 0;
    flag[10000000] = 0;
    for (int i = 2; i <= b; i++)
    {
        if (flag[i])
        {
            prime[n++] = i;
        }
        for (int j = 0; j < n && prime[j] * i <= b; j++)
        {
            flag[prime[j] * i] = 0;
            if (i % prime[j] == 0)
            {
                break;
            }
        }
    }
    // for (int i = 0; i <= b; i++)
    //     if (flag[i])
    //     {
    //         printf("%d\n",i);
    //     }

    for (int i = a; i <= b; i++)
    {
        if (i > 10000000)
            break;
        if (check(i) && flag[i])
        {
            printf("%d\n", i);
        }
    }
    return 0;
}