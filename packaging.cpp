//封装的意义
//求圆的周长
#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
public:
//属性
    int m_r;//半径
//方法
    double calculatePerimeter()
    {
        return 2 * PI * m_r;
    }
};

int main()
{
    Circle c;
    c.m_r = 10;
    cout << c.calculatePerimeter() << endl;
    return 0;
}