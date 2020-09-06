#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, n, m, s = 0;
    scanf("%d %d",&x, &n);
    if (x <= 5)
    {
        s = s + 5 - x + 1;
        n = n - (7 - x + 1);
        s = s + 5 * (n / 7);
        m = n % 7;
        if (m <= 5)
        {
            s = s + m;
        }
        else s = s + 5;
    }
    else
    {
        n = n - (7 - x + 1);
        s = s + 5 * (n / 7);
        m = n % 7;
        if (m <= 5)
        {
            s = s + m;
        }
        else s = s + 5;
    }
    printf("%d", s * 250);
    return 0;
}