//函数重载
//条件：同一作用域，名称相同；参数类型不同或参数个数不同或参数顺序不同
#include <iostream>
using namespace std;

void print(int a)
{
    cout << "int" << endl;
}

void print(double a)
{
    cout << "double" << endl;
}

void print(char* a)
{
    cout << "char*" << endl;
}

int main()
{
    print(10);
    print(10.0);
    print("hello world"); 
}