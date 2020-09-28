#include<stdio.h>
#include<stdlib.h>
struct stu
{
    char name[10];
    int chinese,math,english,sum;
};
int main()
{
    struct stu s[1005];
    int n,max = 0, k = 0;;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d",&s[i].name,&s[i].chinese,&s[i].english,&s[i].math);
        s[i].sum = s[i].math + s[i].chinese +s[i].english;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i].sum > max)
        {
            max = s[i].sum;
            k = i;
        }
        
    }
    printf("%s %d %d %d",s[k].name,s[k].chinese,s[k].english,s[k].math);
    return 0;
}