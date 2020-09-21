#include<stdio.h>
#include<string.h>
int main()
{
    char str[60];
    int n, k;
    scanf("%d",&n);
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        k = str[i] - 'a';
        k = k + n;
        k = k % 26;
        str[i] = 'a' + k;
    }
    printf("%s",str);
    return 0;
}