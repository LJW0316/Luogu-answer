#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a[105], x, n = 0;
    scanf("%d",&x);
    while ( x != 0 )
    {
        a[n] = x;
        n++;
        scanf("%d",&x);
    }
    for (int i = n - 1; i >= 0 ; i--)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}