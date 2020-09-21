#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char str1[15][15],str2[15][15];
int n;

int check1()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str1[i][j] != str2[j][n - i - 1])
            {
                return 0;
            }
               
        }
        
    }
    return 1;
}

int check2()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str1[i][j] != str2[n - i - 1][n - j - 1])
            {
                return 0;
            }
               
        }
        
    }
    return 1;
}

int check3()
{
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str1[i][j] != str2[j][n - i - 1])
            {
                return 0;
            }
               
        }
        
    }
    return 1;
}

int check4()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str1[i][j] != str2[i][n - j - 1])
            {
                return 0;
            }
            
        }
        
    }
    return 1;
    
}

int check5()
{
    char str[15][15];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            str[i][j] = str1[i][n - j - 1];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str[i][j] != str2[j][n - i - 1] && str[i][j] != str2[n - i - 1][n - j - 1] && str[i][j] != str2[j][n - i - 1])
            {
                return 0;
            }
            
        }
        
    }
    return 1;
}

int check6()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str1[i][j] != str2[i][j])
            {
                return 0;
            }   
        }
        
    }
    return 1;
}

int main()
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
            scanf("%s",str1[i]);
    }
    for (int i = 0; i < n; i++)
    {
            scanf("%s",str2[i]);
    }
    if (check1())
    {
        printf("1");
    }
    else if (check2())
    {
        printf("2");
    }
    else if (check3())
    {
        printf("3");
    }
    else if (check4())
    {
        printf("4");
    }
    else if (check5())
    {
        printf("5");
    }
    else if (check6())
    {
        printf("6");
    }
    else printf("7");
    return 0;
}