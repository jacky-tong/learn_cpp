//学深拷贝和浅拷贝
#include <iostream>
#include <string>
using namespace std;
//浅拷贝：只拷贝指针的地址
//深拷贝：拷贝指针指向的内容

//如果利用编译器提供的拷贝构造函数，会做浅拷贝操作，在析构函数中会导致堆区内存的重复释放

class Person
{
public:
    int m_Age;
    int *m_Height;
    Person()
    {
        cout << "默认构造函数" << endl;
    }

    Person(int age , int height)
    {
        m_Age = age;
        m_Height = new int(height);
        cout << "有参构造函数" << endl;
    }

    //拷贝构造函数
    Person(const Person &p)
    {
        cout << "拷贝构造函数" << endl;
        m_Age = p.m_Age;
        //深拷贝
        m_Height = new int(*(p.m_Height));
    } 
    ~Person()
    {
        cout << "析构函数" << endl;
        if (m_Height != nullptr)
        {
            delete m_Height;
            m_Height = nullptr;
        }
    }
};

void test01()
{
    Person p1(18 , 180);
    cout << "p1的age:" << p1.m_Age << endl;
    cout << "p1的height:" << *p1.m_Height << endl;
};

void test02()
{
    Person p1(18 ,  180);
    Person p2(p1);
    cout << "p2的age:" << p2.m_Age << endl;
    cout << "p2的height:" << *p2.m_Height << endl;
}

int main()
{
    test01();
    test02();
    return 0;
} 