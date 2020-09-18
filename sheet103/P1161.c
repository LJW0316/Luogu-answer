#include <stdio.h>
#include <math.h>
int main()
{
    int a[2000005] = {0}, t, n;
    double x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf %d", &x, &t);
        for (int j = 1; j <= t; j++)
        {
            a[(int)(j * x)]++;
            a[(int)(j * x)] = a[(int)(j * x)] % 2;
        }
    }
    for (int i = 1; i <= 2000000; i++)
    {
        if (a[i])
        {
            printf("%d",i);
            break;
        }    
    }
    return 0;
}