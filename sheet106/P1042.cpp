#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[99999999], ch;
    int a = 0, b = 0, n;
    while (cin >> ch)
    {
        if (ch == 'E')
            break;
        else
            s[++n] = ch;
    }
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == 'W')
        {
            a++;
        }
        else if (s[i] == 'L')
        {
            b++;
        }
        if ((a >= 11 || b >= 11) && abs(a - b) > 1)
        {
            cout << a << ":" << b << endl;
            a = 0;
            b = 0;
        }
    }
    cout << a << ":" << b << endl
         << endl;
    a = 0;
    b = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == 'W')
        {
            a++;
        }
        else if (s[i] == 'L')
        {
            b++;
        }
        if ((a >= 21 || b >= 21) && abs(a - b) > 1)
        {
            cout << a << ":" << b << endl;
            a = 0;
            b = 0;
        }
    }
    cout << a << ":" << b << endl;
    return 0;
}
