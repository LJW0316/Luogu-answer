#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string a, b;
    int sum = 0, pos = 0;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        a[i] = tolower(a[i]);
    }
    for (int i = 0; i < b.length(); i++)
    {
        b[i] = tolower(b[i]);
    }
    // a = ' ' + a + ' ';
    // b = ' ' + b + ' ';
    for (int i = 0; i <= b.length() - a.length(); i++)
    {
        int j;
        for (j = 0; j < b.length(); j++)
        {
            if (b[i + j] != a[j])
                break;
            if (i > 0 && b[i - 1] != ' ')
                break;
        }
            if (j == a.length() && (b[j + i] == ' ' || b[j + i] == b.length()))
            {
                sum++;
                if (sum == 1)
                {
                    pos = i;
                }
            } 
    }
    if (sum == 0)
    {
        cout << "-1";
    }
    else
        cout << sum << ' ' << pos << endl;
}