#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("%c", ch - 'a' + 'A');
    return 0;
}