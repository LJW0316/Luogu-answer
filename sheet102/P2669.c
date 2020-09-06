#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 0, k, sum = 0, x = 0;
    scanf("%d", &k);
    while (x < k)
    {
        n++;
        for (int i = 1; i <= n; i++)
        {
            sum = sum + n;
            x++;
            if (x >= k)
            {
                printf("%d", sum);
                return 0;
            }
        }
    }
}