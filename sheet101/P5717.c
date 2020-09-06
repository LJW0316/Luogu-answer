#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if (a + b < c || a + c < b || b + c < a)
    {
        printf("Not triangle");
    }
    else
    {
        if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
        {
            printf("Right triangle\n");
        }
        else if (a * a + b * b > c * c && a * a + c * c > b * b && c * c + b * b > a * a)
        {
            printf("Acute triangle\n");
        }
        else printf("Obtuse triangle\n");
        if (a == b || a == c || b == c)
        {
            printf("Isosceles triangle\n");
        }
        if (a == b && a == c)
        {
            printf("Equilateral triangle\n");
        }
        
    }
    return 0;
}