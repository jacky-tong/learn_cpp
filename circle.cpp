#include <iostream>
#include <cmath>
#include <string>   
using namespace std;

//点类
class Point
{
private:
    int m_X;
    int m_Y;

public:
    void set(int x, int y)
    {
        m_X = x;
        m_Y = y;
    }
    int getX() const { return m_X; }
    int getY() const { return m_Y; }
    void show() const
    {
        cout << "点坐标: (" << m_X << ", " << m_Y << ")" << endl;
    }
};

class Circle
{
private:
    int m_R; // 半径
    Point m_Center; // 圆心

public:
    void set(int x, int y, int r)
    {
        m_Center.set(x, y);
        m_R = r;
    }
    int getR()
    { return m_R; }
    Point getCenter()
    { return m_Center; }
};

void isInCircle(Circle &c, Point &p)
{
    // 计算点到圆心的距离
    int dx = p.getX() - c.getCenter().getX();
    int dy = p.getY() - c.getCenter().getY();
    int distance = sqrt(dx * dx + dy * dy);
    if (distance < c.getR())
    {
        cout << "点在圆内" << endl;
    }
    else if (distance == c.getR())
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
};

int main()
{
    Circle c;
    c.set(0, 0, 5); // 设置圆心为(0, 0)，半径为5

    Point p1, p2, p3;
    p1.set(3, 4); // 点在圆内
    p2.set(5, 0); // 点在圆上
    p3.set(6, 8); // 点在圆外

    cout << "检查点1: ";
    p1.show();
    isInCircle(c, p1);

    cout << "检查点2: ";
    p2.show();
    isInCircle(c, p2);

    cout << "检查点3: ";
    p3.show();
    isInCircle(c, p3);

    return 0;
}