#include <bits/stdc++.h>
using namespace std;
int a[5000005], k;
void qsort(int l, int r) //类快排，但不排完
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
   //快排后数组被划分为三块： l<=j<=i<=r
   if (k <= j) //在左区间只需要搜左区间
   {
      qsort(l, j);
   }
   else if (i <= k) //在右区间只需要搜右区间
   {
      qsort(i, r);
   }
   else //如果在中间区间直接输出
   {
      cout << a[k];
      return;
   }
}
int main()
{
   int n;
   scanf("%d %d", &n, &k);
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   qsort(0, n - 1);
   return 0;
}