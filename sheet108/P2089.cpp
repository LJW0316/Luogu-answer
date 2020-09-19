#include <bits/stdc++.h>
using namespace std;

int a[11], b[50000][11], n, ans;

void dfs(int k, int fsum) //深度优先搜素完成每种调料的枚举
{
    if (k > 10) //10种配料枚举完成
    {
        if (fsum == n) //最终重量等于n
        {
            ans++; //方法数+1
            for (int i = 1; i <= 10; i++)
            {
                b[ans][i] = a[i]; //将配料方法传到数组b中
            }
        }
        return; //不满足则返回
    }
    for (int i = 1; i <= 3; i++) //每种调料从1-3枚举，搜索
    {
        if (fsum + i > n) //若当前美味程度大于n则跳出循环
        {
            break;
        }
        a[k] = i;             //第k位调料数位i
        dfs(k + 1, fsum + i); //搜索下一位调料，当前美味数+i
        a[k] = 0;             //搜索完毕，归0
    }
}

int main()
{
    cin >> n;
    if (n >= 10 && n <= 30) //美味程度一定在10-30之间，排除超过范围的情况
    {
        dfs(1, 0); //从第一位开始搜索枚举
    }
    cout << ans << endl;
    if (ans) //若方法数不为0开始循环
    {
        for (int i = 1; i <= ans; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}