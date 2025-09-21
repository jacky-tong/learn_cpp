#include <iostream>
using namespace std;

int main()
{
    //不能判断一个区间，只能判断一个值
    int a;
    cout << "Enter a number between 1 and 5: ";
    cin >> a;
    cout << "You entered " << a << endl;
    switch (a)
    {
    case 1:
        cout << "You entered 1";
        break;//退出当前的分支，否则会继续输出下一个分支的内容

    case 2:
        cout << "You entered 2";
        break;
    
    default:
        cout << "You entered " << a << " which is not between 1 and 5";
        break;

    }
} 