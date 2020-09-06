#include<stdlib.h>
#include<stdio.h>
int main()
{
    int a[10],i,h,sum = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&h);
    for (i = 0; i < 10; i++)
    {
        if (a[i] <= h + 30)
        {
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}