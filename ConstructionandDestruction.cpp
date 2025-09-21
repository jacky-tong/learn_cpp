//对象的初始化与清理
#include <iostream>
using namespace std;
class Person 
{
//构造函数 无返回值 不用void 函数名与类名相同 可以有参数 可以重载
//析构函数 无返回值 不用void 函数名与类名相同 析构函数名固定为~类名()
public:
    int age;
    Person() 
    {
        cout << "构造函数被调用" << endl;
    }
    
    Person(int age) 
    {
        this->age = age;
        cout << "带参数的构造函数被调用，年龄：" << age << endl;
    }

    Person( const Person &p) 
    {
        this->age = p.age;//将传入的参数赋给当前对象
        cout << "拷贝构造函数被调用" << endl;
    }

    ~Person() 
    {
        cout << "析构函数被调用" << endl;
    }
};

void test01()//括号法
{
    Person p1;//默认构造函数被调用不能加（）
    Person p2(10);
    Person p3(p2);
}
void test02()//显示法
{
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2); //使用拷贝构造函数
}
void test03()//隐式转换法
{
    Person p4 = 20; //隐式转换，调用带参数的构造函数
    Person p5 = p4; //隐式转换，调用拷贝构造函数
}
int main()
{
    test01();
    test02();
    test03();
    return 0;
}