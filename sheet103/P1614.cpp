#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a[3005], sum = 0, res = 9999999;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
        for (int i = 0; i <= n - m; i++)
        {
            sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += a[i + j];
            }
            res = min(res, sum);
        }
    cout << res << endl;
    return 0;
}