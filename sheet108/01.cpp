#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, s1 = 0, s2 = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            s1 += min(i, j); //每次增加的正方形数为i与j的最小值
            s2 += i * j;     //每次增加的总矩形为i * j
        }
    }
    cout << s1 << " " << s2 - s1 << endl; //长方形数为总矩形减去正方形数
    return 0;
}