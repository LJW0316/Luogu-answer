#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[10];
    int sum = 0;
    scanf("%[^\n]",str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            sum++;
        }
        
    }
    printf("%d",sum);
    return 0;
}