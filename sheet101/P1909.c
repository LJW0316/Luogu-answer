#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,a[3][2],s1 = 0,s2 = 0,s3 = 0,i,j,k;
    scanf("%d", &n);
    for (i = 0; i < 3; i++)
    {
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    i = j = k = 0;
    while (i * a[0][0] < n)
    {
        i++;
    }
    s1 = i * a[0][1];
    while (j * a[1][0] < n)
    {
        j++;
    }
    s2 = j * a[1][1];
    while (k * a[2][0] < n)
    {
        k++;
    }
    s3 = k * a[2][1];
    // printf("%d\n%d\n%d\n",s1,s2,s3);
    if (s1 <= s2 && s1 <= s3) printf("%d",s1);
    if (s2 <= s1 && s2 <= s3) printf("%d",s2);
    if (s3 <= s1 && s3 <= s2) printf("%d",s3);
    return 0;
}