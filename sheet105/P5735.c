#include <stdio.h>
#include <math.h>
double dis(double x1,double y1,double x2,double y2)
{
    return sqrt((x2 - x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
    double x1,x2,x3,y1,y2,y3,sum = 0;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3, &y3);
    sum = dis(x1,y1,x2,y2) + dis(x1,y1,x3,y3) + dis(x2,y2,x3,y3);
    printf("%.2lf",sum);
    return 0;
}