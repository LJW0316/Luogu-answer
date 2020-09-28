#include <bits/stdc++.h>
using namespace std;
struct stu
{
    string name;
    int chinese, math, english, sum;
};
int main()
{
    int n;
    struct stu s[1005];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
       cin >>s[i].name >> s[i].chinese >> s[i].english >> s[i].math;
       s[i].sum = s[i].math + s[i].chinese + s[i].english;
    }
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
        {
            if (s[i].name > s[j].name)
            {
                swap(s[i].name, s[j].name);
                swap(s[i].chinese, s[j].chinese);
                swap(s[i].math, s[j].math);
                swap(s[i].english, s[j].english);
                // swap(s[i].sum, s[j].sum);
            }
        }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (abs(s[i].sum - s[j].sum )<= 10 && abs(s[i].chinese - s[j].chinese )<= 5 && abs(s[i].math - s[j].math )<= 5 && abs(s[i].english - s[j].english )<= 5)
            {
                cout << s[i].name << " " << s[j].name << endl;
            }
        }
    }
    return 0;
}