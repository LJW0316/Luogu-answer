#include<stdio.h>
int main()
{
    int a[3],temp;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}