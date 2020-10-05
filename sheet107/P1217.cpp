#include <bits/stdc++.h>
using namespace std;

int a[1001];

int main()
{
    int n, m, x, sum = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        a[x]++; //桶排
    }
    for (int i = 0; i <= 1000; i++)
    {
        if (a[i])
        {
            for (int j = 0; j < a[i]; j++) //按序输出
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
