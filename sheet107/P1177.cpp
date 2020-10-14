#include <cstdio>
#include <algorithm>
using namespace std;

int n, a[100000];

void qsort(int l, int r)
{
    int i = l, j = r, m = a[(l + r) / 2];
    while (i <= j)
    {

        while (a[i] < m)
        {
            i++;
        }
        while (a[j] > m)
        {
            j--;
        }
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (i < r)
    {
        qsort(i, r);
    }
    if (j > l)
    {
        qsort(l, j);
    }
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}