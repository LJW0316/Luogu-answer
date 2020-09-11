#include<stdio.h>
int main()
{
    int road[10005],u,v,l,m,sum = 0;
    scanf("%d %d",&l,&m);
    for (int i = 0; i <= l; i++)
    {
        road[i] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d",&u,&v);
        for (int j = u; j <= v; j++)
        {
            road[j] = 0;
        }
    }
    for (int i = 0; i <= l; i++)
    {
        if (road[i])
        {
            sum++;
        }
        
    }
    printf("%d",sum);
    return 0;
}