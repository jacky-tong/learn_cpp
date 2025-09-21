#include <iostream>
using namespace std;

//纯虚函数和抽象类

class Base
{
public:
    virtual void func() = 0; // 纯虚函数
    //只要有一个纯虚函数，类就是抽象类，不能实例化，抽象类的子类必须重写父类中的纯虚函数，否则是抽象类
};

class Son : public Base
{
public:
    void func()
    {
        cout << "Son func" << endl;
    }
}; 
void test01()
{
    // Base base; // 错误，不能实例化抽象类
    Son son; // 正确，Son类实现了Base的纯虚函数
    son.func(); // 调用Son类的func方法
} 

int main()
{
    test01();
    system("pause");
    return 0;
}