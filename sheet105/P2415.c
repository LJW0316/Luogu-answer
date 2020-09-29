#include<stdio.h>
#include<stdlib.h>    
long long sum = 0;
int main()
{
    int a[1050];
    int i = 0,n = 0;

    while (scanf("%d",&a[i]) != EOF )
    {
        sum += a[i];
        i++;
        n++;
        
    }
    for (int i = 0; i < n - 1; i++)
    {
        sum *= 2;
    }
    printf("%lld",sum);
    return 0;
}