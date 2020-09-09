#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[15];
    int len, n;
    scanf("%s",str);
    len = strlen(str);
    if (str[0] == '-')
    {
        printf("-");
        for (int i = len - 1 ; i > 0; i--)
        {
            if (str[i] != '0')
            {
                n = i;
                break;
            }
        }

        for (int i = n; i > 0; i--)
        {
            printf("%c",str[i]);
        } 
    }
    else
    {
        for (int i = len - 1 ; i >= 0; i--)
        {
            if (str[i] != '0')
            {
                n = i;
                break;
            }
        }

        for (int i = n; i >= 0; i--)
        {
            printf("%c",str[i]);
        } 
    }
    return 0;
}