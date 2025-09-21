//利用多态，写一个计算器类

//多态的好处：
//1. 可以将不同的计算方式封装在不同的类中，便于扩展和维护
//2. 可以通过基类指针或引用来调用派生类的实现 
#include <iostream>
using namespace std;

class Calculator
{
public:
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;
};

class AddCalculator : public Calculator
{
    public:
        int getResult()
        {
            return m_Num1 + m_Num2;
        }
};

class SubCalculator : public Calculator
{
    public:
        int getResult()
        {
            return m_Num1 - m_Num2;
        }
};

void test01()
{
    Calculator *cal = new AddCalculator;
    cal->m_Num1 = 10;
    cal->m_Num2 = 20;
    cout << "Add: " << cal->getResult() << endl;
    delete cal;

    cal = new SubCalculator;
    cal->m_Num1 = 10;
    cal->m_Num2 = 20;
    cout << "Sub: " << cal->getResult() << endl;
    delete cal;
} 