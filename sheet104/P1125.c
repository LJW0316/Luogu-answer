#include<stdio.h>
#include<string.h>
#include<math.h>

int a[27];

int check(int x)
{
    if (x < 2 )
    {
        return 0;
    }
    if (x == 2)
    {
        return 1;
    }
    for (int i = 2; i < sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
    
}

int main()
{
    char str[102];
    int max = 0,min = 9999;
    int flag = 0;
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        a[str[i] - 'a']++;
    }
    for (int i = 0; i < 27; i++)
    {
        if (a[i] > 0 && a[i] > max)
        {
            max =  a[i];
        }
        if (a[i] > 0 && a[i] < min)
        {
            min = a[i];
        }
        
    }
    //printf("%d %d",max, min);
    if (check(max - min))
    {
        printf("Lucky Word\n%d",max - min);
    }
    else
    {
        printf("No Answer\n0");
    }
    
    return 0;
}