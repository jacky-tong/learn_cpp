//数组元素逆置
//请先输入数组的长度和元素，然后输出逆置后的数组元素
#include <iostream>
using namespace std;
int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}