#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str1,str2;
    long long res1 = 1, res2 = 1;
    cin >> str1;
    cin >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        res1 *= str1[i] - 'A' + 1;
    }
    res1 = res1 % 47;
    for (int i = 0; i < str2.length(); i++)
    {
        res2 *= str2[i] - 'A' + 1;
    }
    res2 = res2 % 47;
    if (res1 == res2)
    {
        cout << "GO" << endl;
    }
    else
    {
        cout << "STAY" <<endl;
    }
    
    return 0;
}