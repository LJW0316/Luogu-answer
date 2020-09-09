#include<stdio.h>
int main()
{
    int cost[13],sum = 0,res = 0,stroe = 0;
    for (int i = 0; i < 12; i++)
    {
        scanf("%d",&cost[i]);
    }
    for (int i = 0; i < 12; i++)
    {
        sum =sum + 300 - cost[i];
        if (sum < 0)
        {
            printf("-%d", i + 1);
            return 0;
        }
        stroe =stroe + (sum / 100) * 100;
        sum = sum % 100;      
    }
    res = stroe * 1.2 + sum;
    printf("%d",res);
    return 0;
}