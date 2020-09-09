#include<stdio.h>
int main()
{
    int n, sum = 1, res = 0;
    long long num[10005];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
        if (num[i] - num[i - 1] == 1)
        {
            sum++;
        }
        else
        {
            sum = 1;
        }
        
        if (sum > res)
        {
            res = sum;
        }
        
    }
    printf("%d",res);
    return 0;
}