//设计一个学生类，属性有姓名和学号，可以给学生赋值姓名和学号，可以显示学生的姓名和学号。
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int number;
    void set(string name, int number)
    {
        this->name = name;
        this->number = number;
    }
    void show()
    {
        cout << "姓名：" << name << "学号：" << number << endl;
    }
};

int main()
{
    Student s1;
    s1.set("张三", 1001);
    s1.show();
    return 0;
}