#include <iostream>
using namespace std;  
//拷贝构造函数的使用
//1.使用一个已经创建完毕的对象来初始化另一个对象
//2.值传递的方式传递对象参数时，系统会自动调用拷贝构造函数
//3.值方式返回局部对象时，系统会自动调用拷贝构造函数

class Person
{
public:
    int m_Age;
    Person()
    {
        cout << "无参构造函数" << endl;
    }
    Person(int age)
    {
        cout << "有参构造函数" << endl;
        m_Age = age;
    }
    Person(const Person &p)
    {
        cout << "拷贝构造函数" << endl;
        m_Age = p.m_Age;
    }
    ~Person()
    {
        cout << "析构函数" << endl;
    }
};

void test01()
{
    Person p1(10);
    Person p2(p1); //使用p1初始化p2，调用拷贝构造函数
    cout << "p2的年龄：" << p2.m_Age << endl;
}

void dowork(Person p)//用拷贝构造函数传递对象，所以在dowork里面不能改变p的原本的值
{
    cout << "p的年龄：" << p.m_Age << endl;
} 
void test02()
{
    Person p1;
    dowork(p1);
}

Person dowork2()//用引用传递对象，可以在dowork里面改变p的原本的值
{
    Person p1;
    return p1;
}
void test03()
{
    Person p1 = dowork2();
    cout << "p1的年龄：" << p1.m_Age << endl;
}
int main()
{
    test01();
    test02();
    test03();
    system("pause");
    return 0;
}