#include<stdio.h>
int main()
{
    int n,sum = 0,cute[105];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&cute[i]);
    }
    printf("0 ");
    for (int i = 1; i < n; i++)
    {
        sum = 0;
        for (int j = i; j >= 0; j--)
        {
            if (cute[i] > cute[j])
            {
                sum++;
            }
            
        }
        printf("%d ",sum);
    }
    
    return 0;
}