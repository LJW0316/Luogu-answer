#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, a, b, c, cnt = 0;
    cin >> x >> y >> z;
    int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //存储九个数组，每三个位置组成一个数，后通过函数变换九个数位置进行枚举
    do
    {
        a = num[0] * 100 + num[1] * 10 + num[2];              //a取数组前三元素组成的数
        b = num[3] * 100 + num[4] * 10 + num[5];              //b取数组中间三元素组成的数
        c = num[6] * 100 + num[7] * 10 + num[8];              //c取数组后三位元素组成的数
        if (a * y * z == b * x * z && a * y * z == c * x * y) //a:b:c=x:y:z判断
        {
            cnt++;
            cout << a << " " << b << " " << c << endl;
        }

    } while (next_permutation(num, num + 9));
    //使用next_permutation函数枚举num中元素所有顺序(SLT中函数，实现把123456789变换为12345698，当变换为与第一次相同的顺序时返回false)
    if (!cnt) //0种可能输出NO!!!
    {
        cout << "No!!!" << endl;
    }
    return 0;
}