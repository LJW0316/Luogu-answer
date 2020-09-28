#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[1000];
int check(int x)
{
    if (x < 2)
    {
        return 0;
    }
    if (x == 2)
    {
        return 1;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if (check(a[i]))
        {
            printf("%d ",a[i]);
        }
        
    }
   return 0;
}