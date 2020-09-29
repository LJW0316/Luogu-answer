#include<stdio.h>
#include<stdlib.h>
struct stu
{
    long long id;
    int a,b;
    double sum;
};
int main()
{
    struct stu s[1500];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %d %d",&s[i].id,&s[i].a,&s[i].b);
        s[i].sum = s[i].a * 0.7 + s[i].b * 0.3;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i].sum >= 80 && s[i].a + s[i].b >140)
        {
            printf("Excellent\n");
        }
        else
        {
            printf("Not excellent\n");
        }
        
    }
    
    return 0;
}