#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n <= 5) printf("Local");
    else
    {
        printf("Luogu");
    }
    return 0;
}