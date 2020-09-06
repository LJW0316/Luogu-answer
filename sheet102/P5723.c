#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i = 2,n, mark, s = 0,sum = 0;
    scanf("%d",&n);
    if (n == 1)
    {
        printf("0");
    }
    else
    {
        while (sum < n)
    {
        mark = 1;
        for (int j = 2; j <= (int)sqrt(i); j++)
        {
            if (i % j == 0)
            {
                mark = 0;
                break;
            }
        }
        if (mark)
        {
            if(sum + i <= n) sum += i;
            else break;
            printf("%d\n",i);
            s++;
            
        }
        i++;
    }
    printf("%d",s);
    }
    return 0;
}