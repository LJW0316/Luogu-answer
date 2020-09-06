#include<stdio.h>
#include<stdlib.h>
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return gcd(y, x % y);
}
int main()
{
    int a, b, c, x, y, m;
    scanf("%d %d %d",&a, &b, &c);
    if (a > b && a > c)
    {
        x = a;
    }
    if (b > a && b > c)
    {
        x = b;
    }
    if (c > a && c > b)
    {
        x = c;
    }
    if (a < b && a < c)
    {
        y = a;
    }
    if (b < a && b < c)
    {
        y = b;
    }
    if (c < a && c < b)
    {
        y = c;
    }
    m = gcd(x, y);
    printf("%d/%d", y / m, x / m);
    return 0;
}