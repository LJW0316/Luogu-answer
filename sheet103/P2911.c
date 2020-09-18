#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100] = {0}, s1, s2, s3, max = 0, res = 0;
    scanf("%d %d %d", &s1, &s2, &s3);
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            for (int k = 1; k <= s3; k++)
            {
                a[i + k + j]++;
            }
        }
    }
    for (int i = 1; i <= 90; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            res = i;
        }
    }
    printf("%d", res);
    return 0;
}