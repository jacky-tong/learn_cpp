//运算符重载
#include <iostream>
using namespace std;

class Complex
{
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
    int real;
    int img;
};

//重载运算符函数可以作为类的成员函数，也可以作为全局函数

/*
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
};
*/


//左移运算符重载,不能用成员函数写，如果访问的是私有成员，可以将全局函数设置为友元函数
//重载左移运算符配合友元可以实现输出自定义据类型
ostream &operator<<(ostream &cout, Complex c)
{
    cout << c.real << " + " << c.img << "i" << endl;
    return cout;
}

//递增运算符重载
class MyInteger
{
    friend ostream &operator<<(ostream &cout, MyInteger myint);
public:
    int *m_Num; // 使用指针来存储整数值,以此实现深拷贝
    MyInteger()
    {
        m_Num = new int(0);
    }
    // 重载++运算符,前置
    MyInteger &operator++()
    {
        m_Num++;
        return *this;
    }
    // 重载++运算符,后置
    MyInteger operator++(int)//int代表占位参数，可以用于区分前置和后置递增
    {
        MyInteger temp = *this;
        m_Num++;
        return temp;
    }
    
    MyInteger operator--(int) // 后置递减
    {
        MyInteger temp = *this;
        m_Num--;
        return temp;
    }

    //赋值运算符重载,深拷贝
    MyInteger &operator=(const MyInteger &myint)
    {
        if (m_Num != NULL)
        {
            delete m_Num;
            m_Num = NULL;

        }
        m_Num = new int(*myint.m_Num);
        return *this;
    }

    //析构函数
    ~MyInteger()
    {
        if (m_Num != NULL)
        {
            delete m_Num;
            m_Num = NULL;
        }
    }

    //重载==函数
    bool operator==(const MyInteger &myint)
    {
        return *m_Num == *myint.m_Num;
    }
    //重载!=函数
    bool operator!=(const MyInteger &myint)
    {
        return *m_Num != *myint.m_Num;
    }
    //重载<函数
    bool operator<(const MyInteger &myint)
    {
        return *m_Num < *myint.m_Num;
    }
    //重载>函数
    bool operator>(const MyInteger &myint)
    {
        return *m_Num > *myint.m_Num;
    }

    //函数调用运算符重载
    void operator()(string str)
    {
        cout << "函数调用运算符重载" << endl;
        cout << str << endl;
    }


private:
    int m_Num;
};

ostream &operator<<(ostream &cout, MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}
void test01()
{
    MyInteger myint;
    cout << ++myint << endl; // 需要重载<<运算符和++运算符
}

void test02()
{
    MyInteger myint1;
    MyInteger myint2;
    myint2 = myint1++; // 需要重载++运算符
    cout << myint1 << endl;
    cout << myint2 << endl;
};

void test03()
{
    MyInteger myint1;
    MyInteger myint2;
    myint2 = myint1--; // 需要重载--运算符
    cout << myint1 << endl;
    cout << myint2 << endl;
};

void test04()
{
    MyInteger myint1;
    MyInteger myint2;
    myint2 = myint1; // 需要重载=运算符
    cout << myint1 << endl;
    cout << myint2 << endl;
};
int main()
{
    Complex c1(5, 3), c2(10, 5);
    Complex c3 = c1 + c2;
    cout << c3.real << " + " << c3.img << "i" << endl;
    cout << c1 << c2; 
    cout << c3;
    test01();
    test02();
    test03();
    test04();
    MyInteger myint1;
    myint1("hello world");
    return 0;
}
