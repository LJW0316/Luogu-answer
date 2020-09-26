#include <iostream>
#include <cstring>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    char dic[30][30] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "a", "both", "another", "first", "second", "third"};
    int di[30] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 00, 21, 44, 69, 96, 25, 56, 89, 24, 61, 0, 1, 4, 1, 1, 4, 9}, a[10];
    int k = 0;
    char s[20];
    bool flag = false;
    for (int i = 0; i < 6; i++)
    {
        cin >> s;
        for (int j = 0; j <= 26; j++)
        {
            if (!strcmp(dic[j], s))
            {
                a[k] = di[j];
                k++;
                break;
            }
        }
    }
    sort(a, a + k);
    for (int i = 0; i < k; i++)
    {
        if (flag)
        {
            cout << setfill('0') << setw(2) << a[i];
        }
        else if (a[i])
        {
            flag = true;
            cout << a[i];
        }
    }
    if(!flag) cout << 0;
    return 0;
}