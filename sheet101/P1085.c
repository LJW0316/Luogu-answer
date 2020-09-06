#include<stdio.h>
int main()
{
    int a,b,res1 = 0, s1 = 0, s2 = 0, res = 0;
    for (int i = 1; i <= 7; i++)
    {
        scanf("%d %d",&a, &b);
        s1 = a + b;
        if (s1 > 8) res1 = i;
        if (s1 > s2) 
        {
            s2 = s1;
            res = res1;
        }
    }
    printf("%d",res);
    return 0;
}