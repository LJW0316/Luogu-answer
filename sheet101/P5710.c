#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  x, flag1 = 0, flag2 = 0;
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        flag1 = 1;
    }
    if (x > 4 &&  x <= 12)
    {
        flag2 = 1;
    }
    if (flag1 && flag2) printf("1 ");
        else printf("0 ");
    if (flag1 || flag2) printf("1 ");
        else printf("0 ");
    if ((flag1 && !flag2) || (flag2 && !flag1)) printf("1 ");
        else printf("0 ");
    if (!flag1 && !flag2) printf("1");
        else printf("0");    
    return 0;
}
