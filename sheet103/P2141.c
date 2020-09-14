#include <stdio.h>
int main()
{
    int n, sum = 0, res = 0, a[1000], b[30000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] != a[j])
            {
                sum = a[i] + a[j];
                b[sum]++;
            }
        }
    }
    for (int i = 0; i < 30000; i++)
    {
        if (b[i])
        {
            for (int j = 0; j < n; j++)
            {
                if (i == a[j])
                res++;
            }
            
        }
        
    }
    
    printf("%d", res);
    return 0;
}