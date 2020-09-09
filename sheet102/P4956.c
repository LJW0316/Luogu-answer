#include <stdio.h>
int main()
{
    int n, x, sum = 0, k = 0;
    scanf("%d", &n);
    while (sum != n)
    {
        k++;
        for (x = 100; x >= 1; x--)
        {
            sum = x * 7 + 21 * k;
            sum = sum * 52;
            if (sum == n)
            {
                printf("%d\n%d", x, k);
                break;
            }
        }
    }
    return 0;
}