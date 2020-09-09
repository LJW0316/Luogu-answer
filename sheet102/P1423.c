#include<stdio.h>
#include<stdlib.h>
int main()
{
    double dis,pace = 2;
    int res = 0;
    scanf("%lf",&dis);
    while (dis > 0)
    {
        res++;
        dis -= pace;
        pace *= 0.98;
    }
    printf("%d",res);
    return 0;
}