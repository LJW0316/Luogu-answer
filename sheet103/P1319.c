#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x, y, k = 0, sum = 0, t = 0;
    scanf("%d", &n);
    while (sum < n * n)
    {
        scanf("%d", &x);
        sum += x;
        t++;
        if (t % 2)
        {

            for (int i = 0; i < x; i++)
            {
                k++;
                printf("0");
                if (k % n == 0)
                {
                    printf("\n");
                }
            }
        }
        else
        {
            for (int i = 0; i < x; i++)
            {
                k++;
                printf("1");
                if (k % n == 0)
                {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}