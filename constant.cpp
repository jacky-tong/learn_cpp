#include <iostream>
using namespace std;

/* C++ 常量的定义方式
1. const 关键字  修饰的变量 不能被修改
2. #define 宏定义 常量 不能被修改
*/

#define Day 7  // 宏定义常量，无分号
const int Month = 12;  // const修饰的常量

int main() 
{
    cout << "一周有" << Day << "天" << endl;
    cout << "一年有" << Month << "个月" << endl;
    system("pause");
    return 0;
}