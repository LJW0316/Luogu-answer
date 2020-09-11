#include <stdio.h>
#include <math.h>
int sum(int *a)
{
    int s = 0;
    s = a[0] + a[1] + a[2];
    return s;
}
int main()
{
    int n, a[1005][3], s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs (a[i][0] - a[j][0]) <= 5 && 
				abs (a[i][1] - a[j][1]) <= 5 && 
				abs (a[i][2] - a[j][2]) <= 5 && 
				abs (sum(a[i]) - sum(a[j])) <= 10)
            {
                s++;
            }
        }
    }
    printf("%d",s);
    return 0;
}