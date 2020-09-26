#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str, str1, str2;
    int k = 0, t = 0;
    bool flag = false;
    char ch;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '.' && str[i] != '/' && str[i] != '%' && !flag)
        {
            str1 += str[i];
        }
        if (str[i] == '.' || str[i] == '/')
        {
            ch = str[i];
            flag = true;
        }
        if (str[i] != '.' && str[i] != '/' && str[i] != '%' && flag)
        {
            str2 += str[i];
        }
    }
    if (str1 == "0")
    {
        cout << str1;
    }
    else
    {
        for (int i = str1.length() - 1; i >= 0; i--)
        {
            if (str1[i] != '0')
            {
                k = i;
                break;
            }
        }
        for (int i = k; i >= 0; i--)
        {
            cout << str1[i];
        }
    }

    if (flag)
    {
        cout << ch;
        if (str2 == "0")
        {
            cout << str2;
        }
        else
        {
            for (int i = str2.length() - 1; i >= 0; i--)
            {
                if (str2[i] != '0')
                {
                    k = i;
                    break;
                }
            }
            for (int i = 0; i < str2.length(); i++)
            {
                if (str2[i] != '0')
                {
                    t = i;
                    break;
                }
            }

            for (int i = k; i >= t; i--)
            {
                cout << str2[i];
            }
        }
    }
    if (str[str.length() - 1] == '%')
    {
        cout << "%";
    }

    return 0;
}