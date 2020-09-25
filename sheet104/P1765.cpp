#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    int sum = 0;
    int num[28] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            sum += num[str[i] - 'a'];
        }
        if (str[i] == ' ')
        {
            sum++;
        }     
    }
    cout << sum << endl;
    return 0;
}