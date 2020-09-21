#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int x,a[200],sum = 0,flag = 0, k = 0, t = 0, n;
    char str1[202],str2[50000] = "";
    scanf("%s",str1);
    n = strlen(str1);
    strcat(str2,str1);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%s",str1);
        strcat(str2,str1);
    }
    printf("%d ",n);
    for (int i = 0; i < n * n; i++)
    {
        if ((str2[i] - '0') == flag) sum++;
        else
        {
            flag = str2[i] - '0';
            printf("%d ",sum);
            sum = 1;
        }      
    }
    printf("%d",sum);
    return 0;
}