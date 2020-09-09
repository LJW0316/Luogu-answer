#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[1005],max = -1,min = 11,sum = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
        sum += a[i];
    }
    printf("%.2lf",(sum - min - max) * 1.0 / (n - 2));
    return 0;
}