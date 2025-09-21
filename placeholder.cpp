#include <iostream>
using namespace std;

//占位参数只要写数据类型
void func(int a , int)
{
    cout << "Function with two parameters called." << endl;
}

int main()
{
    func(10,20);
    return 0;
}