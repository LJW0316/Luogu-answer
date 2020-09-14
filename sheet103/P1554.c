#include<stdio.h>
#include<stdlib.h>

int a[10];

void count(int x)
{
    while (x > 0)
    {
        a[x % 10]++;
        x = x / 10;
    }
    
}

int main()
{
    int n,m;
    scanf("%d %d",&n, &m);
    for (int i = n; i <= m; i++)
    {
        count(i);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}