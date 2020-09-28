#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,max = -1,min = 9999;
    int a[100][30];
    double b[30],max1 = 0;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&a[i][j]);
            b[i] += a[i][j]; 
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        b[i] = (b[i] - max - min) * 1.0 / (m - 2);
        max = -1;
        min = 9999;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] > max1)
        {
            max1 = b[i];
        }
    }
    printf("%.2lf",max1);
    return 0;
}