#include <bits/stdc++.h>
using namespace std;

int a[25], res, k, n;

bool check_prime(int x) //判断是否为素数
{
    if (x == 1)
    {
        return false;
    }
    if (x == 2)
    {
        return true;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

void select(int start, int count, int sum)
{
    if (count == k && check_prime(sum)) //已选k个数，且和为素数，结果+1，返回
    {
        res++;
        return;
    }
    for (int i = start; i < n; i++) //从start开始递归选择
    {
        select(i + 1, count + 1, sum + a[i]); //从下一个数开始，已选数+1，和+a[i]
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    select(0, 0, 0); //从a[0]开始选择，初始选了0个数，和为0
    cout << res << endl;
    return 0;
}