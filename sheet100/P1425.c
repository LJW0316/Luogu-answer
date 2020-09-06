#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b, &c, &d);
    printf("%d %d",(c * 60 + d - a * 60 - b) / 60, (c * 60 + d - a * 60 - b) % 60);
    return 0;
}