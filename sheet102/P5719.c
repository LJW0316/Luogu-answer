#include<stdio.h>
int main()
{
    int n,k,sum1 = 0,sum2 = 0,x1 = 0, x2 = 0;
    scanf("%d %d",&n,&k);
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sum1 += i;
            x1++;
        }
        else 
        {
            sum2 += i;
            x2++;
        }
    }
    printf("%.1lf %.1lf",sum1 * 1.0 / x1, sum2 * 1.0 / x2);
    return 0;
}