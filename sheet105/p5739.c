#include<stdio.h>
#include<stdlib.h>
int n;
long long sum = 1;
long long cal(int x)
{
    if (x > n)
    {
        return sum;
    }
    else
    {
        sum *= x;
        return cal(x + 1);
    }
    
}
int main()
{
    scanf("%d",&n);
    long long res;
    res = cal(1);
    printf("%d",res);
    return 0;
}