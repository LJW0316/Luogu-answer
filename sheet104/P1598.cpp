#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int a[27];

int main()
{
    string str;
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        getline(cin,str);
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                a[str[j] - 'A']++;
            }
        }       
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = max; i >= 1; i--)
    {
        for (int j = 0; j < 26; j++)
        {
            if (a[j] >= i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            
        }
        cout << endl;
        
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c ",'A'+i);
    }
    
    return 0;
}