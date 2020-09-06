#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n, s = 0;
    scanf("%d",&n);
   while (n > 0)
    {
        i++;
        if (i < 10)
        {
            printf("0%d",i);
            s++;
        }
        else 
        {
            printf("%d",i);
            s++;
        }
       if (s % n == 0)
       {
           printf("\n");
           n--;
           s = 0;
       }
        
    }
    return 0;
}