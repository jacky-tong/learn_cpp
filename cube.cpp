//立方体类设计

#include <iostream>
#include <string>
using namespace std;

class Cube
{
public:
    void get(int l, int w, int h)
    {
        m_L = l;
        m_W = w;
        m_H = h;
    }
    void show()
    {
        cout << "长: " << m_L << ", 宽: " << m_W << ", 高: " << m_H << endl;
    }
    int volume()
    {
        return m_L * m_W * m_H;
    }
    int area()
    {
        return 2 * (m_L * m_W + m_W * m_H + m_H * m_L);
    }
private:
    int  m_L ; //长
    int  m_W ; //宽
    int  m_H ; //高
};

int main()
{
    Cube c1;
    c1.get(3, 4, 5);
    c1.show();
    cout << "体积: " << c1.volume() << endl;
    cout << "面积: " << c1.area() << endl;
    return 0;
}