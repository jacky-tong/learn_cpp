//封装的意义：三种权限
//公共权限 public 成员类内、类外都可以访问
//私有权限 private 成员类内可以访问，类外不可以访问，子类不可以访问
//保护权限 protected 类内可以访问，类外不可以访问，子类可以访问
//struct默认是public权限，class默认是private权限

#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
    string m_Name;
    int m_Age;

    //成员函数
    void showPerson()
    {
        cout << "姓名：" << m_Name << " 年龄：" << m_Age << endl;
    }

protected:
    string m_Car;
private:
    string m_Password;
};

int main()
{
    Person p;
    p.m_Name = "张三";
    p.m_Age = 20;
    p.showPerson();

    // 访问受保护成员和私有成员会导致编译错误
    // p.m_Car = "宝马"; // 错误：无法访问受保护成员
    // p.m_Password = "123456"; // 错误：无法访问私有成员

    return 0;
}