#include<bits/stdc++.h>
using namespace std;

struct toy
{
    char name[1000];
    int side;
};

toy t[100005];
int a[100005][2];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s",&t[i].side, &t[i].name);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d",&a[i][0], &a[i][1]);
    }
    int x = 0;
    for (int i = 0; i < m; i++)
    {
        if (t[x].side == 0)
        {
            if (a[i][0] == 0)
            {
                x -= a[i][1];
            }
            else
            {
                x += a[i][1];
            }
        }
        else
        {
            if (a[i][0] == 0)
            {
                x += a[i][1];
            }
            else
            {
                x -= a[i][1];
            }
        }
        if (x < 0)
        {
            x = n + x;
        }
        if (x > n - 1)
        {
            x = x - n;
        }
    }
    cout << t[x].name << endl;
    return 0;
}