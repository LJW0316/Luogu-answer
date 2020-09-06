#include<stdio.h>
int main()
{
    int x,n,min = 65535;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        if (x < min)
        {
            min = x;
        }
    }
    printf("%d",min);
    return 0;
}