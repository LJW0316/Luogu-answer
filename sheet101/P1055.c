#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s = 0;
    char c,ch,a[10];
    scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c",&a[0],&c,&a[1],&a[2],&a[3],&c,&a[4],&a[5],&a[6],&a[7],&a[8],&c,&a[9]);
    for (int i = 0; i < 9; i++)
    {
        s = s + (i + 1) * (a[i] - '0');
    }
    s = s % 11;
    if (s == 10) ch = 'X';
    else
    {
        ch = '0' + s;
    }
    
    if (ch == a[9]) printf("Right");
    else
    {
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",a[0],c,a[1],a[2],a[3],c,a[4],a[5],a[6],a[7],a[8],c,ch);
    }
    
    return 0;
}