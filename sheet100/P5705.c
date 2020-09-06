#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[10];
    int i;
    int len;
    scanf("%s",str);
    len = strlen(str);
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}