#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned long long n, res = 0;
    scanf("%lld", &n);
    res = n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4;
    printf("%lld",res);
    return 0;
}
