#include<stdio.h>
int main()
{
    int n,a[1005][10],sum = 0,b[10] = {0};
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d",&a[i][j]);
        }
        a[i][8] = 0;
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                if (a[0][i] == a[j][k])
                {
                    a[j][8]++;
                }
            }
            
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        switch (a[i][8])
        {
        case 7:
            b[0]++;
            break;
        case 6:
            b[1]++;
            break;
        case 5:
            b[2]++;
            break;
        case 4:
            b[3]++;
            break;
        case 3:
            b[4]++;
            break;
        case 2:
            b[5]++;
            break;
        case 1:
            b[6]++;
            break;
        default:
            break;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",b[i]);
    }
    
    return 0;
}