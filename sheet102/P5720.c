#include<stdio.h>
#include<math.h>
int main()
{
    int n,s = 0;
    scanf("%d",&n);
    while (n > 1)
    {
        n =floor(n / 2);
        s++;
    }
    printf("%d",s + 1);
    return 0;
}