#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year,month,mark = 0;
    int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d",&year, &month);       
    if (year % 4 ==  0 && year % 100 != 0) mark = 1;
    if (year % 400 == 0) mark = 1;
    if (mark && month == 2) printf("29");
    else
    {
        printf("%d", day[month - 1]);
    }
    return 0;
}