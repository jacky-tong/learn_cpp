//成员属性设置为私有
//好处：可以自己控制读写的权限，检测数据的有效性

#include <iostream>
#include <string>
using namespace std;

class Person 
{ 
public:
    void setName(string n) 
    {
    name = n;
    }
    string getName() 
    {
        return name;
    }
    int getAge() 
    {
        return age;
    }
    void setidol(string i) 
    {
        idol = i;
    }
private:
    string name;  // 姓名 可读可写
    int age = 18;      // 年龄 只读
    string idol;  // 偶像 只写
};

int main() 
{ 
    Person p1; 
    p1.setName("张三"); 
    cout << p1.getName() << endl; 
    cout << p1.getAge() << endl;
    return 0; 
}