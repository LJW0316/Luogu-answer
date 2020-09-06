#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int m,t,s;
    int result;
    scanf("%d %d %d",&m, &t, &s);
    if (t == 0) printf("0");
        else
        {
            result = (int)(m - ceil(s * 1.0 / t));
            if (result < 0) printf("0");
                else
                {
                    printf("%d",result);
                }
                
        }
    return 0;
}