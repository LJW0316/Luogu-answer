#include<stdio.h>
#include<stdlib.h>
struct stu
{
    char name[200];
    int age,score;
};
int main()
{
    int n;
    struct stu s[1999];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d",s[i].name,&s[i].age,&s[i].score);
        s[i].age++;
        s[i].score = s[i].score * 1.2;
        if (s[i].score >600)
        {
            s[i].score = 600;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d\n",s[i].name,s[i].age,s[i].score);
    }
    return 0;
}