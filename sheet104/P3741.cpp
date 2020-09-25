#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, sum = 0, t = 0;
    string str;
    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'V' && str[i + 1] == 'K')
        {
            sum++;
            str[i] = 'a';
            str[i + 1]  ='a';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'V' && str[i + 1] == 'V')
        {
            t = 1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'K' && str[i + 1] == 'K')
        {
            t = 1;
            break;
        }
    }
    if (t)
    {
        sum++;
    }
    cout << sum << endl;
    return 0;
}