#include<stdio.h>
int main()
{
    int a[105],min = 99999, max = -1, n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d", max - min);
    return 0;
}