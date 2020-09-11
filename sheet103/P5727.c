#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, a[100000],x = 0;
    scanf("%d",&n);
    if (n == 1)
    {
        printf("1");
    }
    else
    {
        a[x] = n;
        x++; 
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                a[x] = n;
                x++;
            }
            else
            {
                n = n * 3 + 1;
                a[x] = n;
                x++;
            }
        }
        for (int i = x - 1; i >= 0; i--)
        {
            printf("%d ",a[i]);
        }
    }
    
}