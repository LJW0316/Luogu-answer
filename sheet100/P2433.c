#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("I love Luogu!");
        break;
    case 2:
        printf("6 4");
        break;
    case 3:
        printf("3\n12\n2");
        break;    
    case 4:
        printf("%.3lf", 500.0 / 3);
        break;
    case 5:
        printf("15");
        break;
    case 6:
        printf("%.4lf", sqrt(6 * 6 + 9 * 9));
        break;
    case 7:
        printf("110\n90\n0");
        break;
    case 8:
        printf("%.4lf\n%.4lf\n%.3lf", 3.1415926 * 2 * 5, 3.1415926 * 25, 3.1415926 * 4 / 3 * 125);
        break;
    case 9:
        printf("22");
        break;    
    case 10:
        printf("9");
        break;
    case 11:
        printf("%.4lf", 100.0 / 3);
        break;
    case 12:
        printf("13\nR");
        break;
    case 13:
        printf("16");
        break;
    case 14:
        printf("50");
        break;
    }
    return 0;
}