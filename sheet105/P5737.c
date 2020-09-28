#include<stdio.h>
#include<stdlib.h>
int check(int x)
{
    if (x % 4 == 0)
    {
        if(x % 100 != 0) return 1;
        if (x % 100 == 0)
        {
            if (x % 400 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
            
        }
        
    }
    else
    {
        return 0;
    }
    
}
void print(int x,int y)
{
    int sum = 0;
    int a[1000];
    for (int i = x; i <= y; i++)
    {
        if (check(i))
        {
            a[sum] = i;
            sum++;
        }
        
    }
    printf("%d\n",sum);
    for(int i = 0; i < sum; i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int x,y; 
    scanf("%d %d",&x, &y);  
    print(x,y);
    return 0;
}