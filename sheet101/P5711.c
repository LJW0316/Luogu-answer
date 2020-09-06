#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, mark = 0;   
    scanf("%d", &x);
    if (x % 4 ==  0 && x % 100 != 0) mark = 1;
    if (x % 400 == 0) mark = 1;
    printf("%d", mark);
    return 0;
}