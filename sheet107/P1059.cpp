#include <bits/stdc++.h>
using namespace std;

int a[1001];

int main()
{
    int n, x, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)//桶排
    {
        cin >> x;
        a[x] = 1;
    }
    for (int i = 0; i <= 1000; i++)
    {
        if (a[i])
        {
            sum++;
        }
    }
    cout << sum << endl;

    for (int i = 0; i <= 1000; i++)
    {
        if (a[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}
