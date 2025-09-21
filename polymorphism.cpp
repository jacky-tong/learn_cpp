#include <iostream>
using namespace std;
//多态

class Animal
{
public:
    virtual void speak()
    {
        cout << "Animal speak" << endl;
    };
};

class Cat : public Animal
{
public:
    void speak()
    {
        cout << "Cat speak" << endl;
    };
};

void doSpeak(Animal &animal) 
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat); 
}

void test02()
{
    cout << sizeof(Animal) << endl;
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}