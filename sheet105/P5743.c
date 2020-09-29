#include<stdio.h>
int main()
{
    int sum = 1,n;
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        sum = (sum + 1) * 2;
    }
    printf("%d",sum);
    return 0;
}