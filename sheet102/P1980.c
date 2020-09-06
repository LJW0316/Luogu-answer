#include<stdio.h>
#include<stdlib.h>
int check(int n, int x)
{
    int s = 0, m;
    while (n > 0)
    {
        m = n % 10;
        if (m == x)
        {
            s++;
        }
        n = n / 10;      
    }
    return s;
}

int main()
{
    int n,x,sum = 0;
    scanf("%d %d", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + check(i, x);
    }
    printf("%d",sum);
    return 0;
}
