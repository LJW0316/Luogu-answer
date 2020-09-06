#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n <= 1) printf("Today, I ate %d apple.",n);
    else printf("Today, I ate %d apples.",n);
    return 0;
}