#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    char a;             
    int n, x, y;   
    char s[1000], str[100]; 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        x = 0;
        y = 0;
        cin >> str; 
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            a = str[0]; 
            cin >> x >> y;
        }
        else
        {
            sscanf(str, "%d", &x);
            cin >> y;  
        }
        memset(s, 0, sizeof(s));
        if (a == 'a')
            sprintf(s, "%d+%d=%d", x, y, x + y);
        if (a == 'b')
            sprintf(s, "%d-%d=%d", x, y, x - y);
        if (a == 'c')
            sprintf(s, "%d*%d=%d", x, y, x * y);
        cout << s << endl
             << strlen(s) << endl;
    }
    return 0;
}
