#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,a[10000];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%1d",&a[i]);
    }
    char num[11][5][4] = {
        "XXX",//0
	"X.X",
	"X.X",
	"X.X",
	"XXX",
	"..X",//1,右对齐，坑2
	"..X",
	"..X",
	"..X",
	"..X",
	"XXX",//2
	"..X",
	"XXX",
	"X..",
	"XXX",
	"XXX",//3
	"..X",
	"XXX",
	"..X",
	"XXX",
	"X.X",//4
	"X.X",
	"XXX",
	"..X",
	"..X",
	"XXX",//5
	"X..",
	"XXX",
	"..X",
	"XXX",
	"XXX",//6
	"X..",
	"XXX",
	"X.X",
	"XXX",
	"XXX",//7
	"..X",
	"..X",
	"..X",
	"..X",
	"XXX",//8
	"X.X",
	"XXX",
	"X.X",
	"XXX",
	"XXX",//9
	"X.X",
	"XXX",
	"..X",
	"XXX"
};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%s",num[a[j]][i]);
            if (j < n - 1)
            {
                printf(".");
            }
            
        }
        printf("\n");
    }
    return 0;
}