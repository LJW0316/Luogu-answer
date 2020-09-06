#include<stdio.h>
#include<stdlib.h>
int main()
{
    float m,h,BIM;
    scanf("%f %f",&m, &h);
    BIM = m / h / h;
    if(BIM < 18.5) printf("Underweight");
    else if(BIM >= 18.5 && BIM <24) printf("Normal");
    else
    {
        printf("%.4f\nOverweight",BIM);
    }
    return 0;
}