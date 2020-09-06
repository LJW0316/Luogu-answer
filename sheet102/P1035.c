#include<stdio.h>
#include<math.h>
int main()
{
    double s;
    int k,n = 0;
    scanf("%d",&k);
    for (s = 0; s <= k; s = s + 1.0 / n)
    {
        n++;
    }
    printf("%d",n);
    return 0;
}