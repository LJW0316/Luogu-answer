#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[105];
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <='z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        
    }
    printf("%s",str);
    return 0;
}