#include<stdio.h>
int main()
{
    int n,x = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x++;
            if (x < 10)
            {
                printf("0%d",x);
            }
            else
            {
                printf("%d",x);
            }
            
        }
        printf("\n");
    }
    printf("\n");
    x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            
            if (j > i)
            {
                printf("  ");
            }
            else
            {
                x++;
                if (x < 10)
                {
                    printf("0%d",x);
                }
                else
                {
                    printf("%d",x);
                }
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}