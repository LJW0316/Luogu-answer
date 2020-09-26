#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    int sum = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'b' && str[i + 1] == 'o' && str[i + 2] == 'y')
        {
            sum++;
            str[i] = 'x';
            str[i + 1] = 'x';
            str[i + 2] = 'x';
        }
        if (str[i] == 'b' && str[i + 1] == 'o' && str[i + 2] != '.')
        {
            sum++;
            str[i] = 'x';
            str[i + 1] = 'x';
        }
        if (str[i] == 'b' && str[i + 1] != '.' && str[i + 2] != '.')
        {
            sum++;
            str[i] = 'x';
        }
        if (!str[i] != '.' && str[i + 1] == 'o' && str[i + 2] == 'y')
        {
            sum++;
            str[i + 1] = 'x';
            str[i + 2] = 'x';
        }
        if (!str[i] != '.' && str[i + 1] == 'o' && str[i + 2] != '.')
        {
            sum++;
            str[i + 1] = 'x';
        }
        if (!str[i] != '.' && str[i + 1] != '.' && str[i + 2] == 'y')
        {
            sum++;
            str[i + 2] = 'x';
        }
    }
    cout << sum << endl;
    sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'g' && str[i + 1] == 'i' && str[i + 2] == 'r' && str[i + 3] == 'l')
        {
            sum++;
            str[i] = 'x';
            str[i + 1] = 'x';
            str[i + 2] = 'x';
            str[i + 3] = 'x';
        }
        if (str[i] == 'g' && str[i + 1] == 'i' && str[i + 2] == 'r' && str[i + 3] != '.')
        {
            sum++;
            str[i] = 'x';
            str[i + 1] = 'x';
            str[i + 2] = 'x';
        }
        if (str[i] == 'g' && str[i + 1] == 'i' && str[i + 2] != '.' && str[i + 3] != '.')
        {
            sum++;
            str[i] = 'x';
            str[i + 1] = 'x';
        }
        if (str[i] == 'g' && str[i + 1] != '.' && str[i + 2] != '.' && str[i + 3] != '.')
        {
            sum++;
            str[i] = 'x';
        }
        if (str[i] != '.' && str[i + 1] == 'i' && str[i + 2] == 'r' && str[i + 3] == 'l')
        {
            sum++;
            str[i + 1] = 'x';
            str[i + 2] = 'x';
            str[i + 3] = 'x';
        }
        if (str[i] != '.' && str[i + 1] == 'i' && str[i + 2] == 'r' && str[i + 3] != '.')
        {
            sum++;
            str[i + 1] = 'x';
            str[i + 2] = 'x';
        }
        if (str[i] != '.' && str[i + 1] == 'i' && str[i + 2] != '.' && str[i + 3] != '.')
        {
            sum++;
            str[i + 1] = 'x';
        }
        if (str[i] != '.' && str[i + 1] != '.' && str[i + 2] == 'r' && str[i + 3] == 'l')
        {
            sum++;
            str[i + 2] = 'x';
            str[i + 3] = 'x';
        }
        if (str[i] != '.' && str[i + 1] != '.' && str[i + 2] == 'r' && str[i + 3] != '.')
        {
            sum++;
            str[i + 2] = 'x';
        }
        if (str[i] != '.' && str[i + 1] != '.' && str[i + 2] != '.' && str[i + 3] == 'l')
        {
            sum++;
            str[i + 3] = 'x';
        }
    }
    cout << sum << endl;
    return 0;
}