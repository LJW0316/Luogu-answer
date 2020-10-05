#include <bits/stdc++.h>
using namespace std;

char str[200][200];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> str[i][j];
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            sum = 0;
            if (str[i][j] == '*')
            {
                cout << str[i][j];
            }
            else
            {
                if (str[i - 1][j] == '*')
                    sum++;
                if (str[i + 1][j] == '*')
                    sum++;
                if (str[i][j - 1] == '*')
                    sum++;
                if (str[i][j + 1] == '*')
                    sum++;
                if (str[i + 1][j + 1] == '*')
                    sum++;
                if (str[i + 1][j - 1] == '*')
                    sum++;
                if (str[i - 1][j + 1] == '*')
                    sum++;
                if (str[i - 1][j - 1] == '*')
                    sum++;
                cout << sum;
            }
        }
        cout << endl;
    }
}