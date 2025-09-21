//多态的案例 制作饮料
#include <iostream>
#include <string>
using namespace std;

class AbstractDrinking
{
public:
    virtual void boil() = 0;
    virtual void brew() = 0;
    virtual void pourinCup() = 0;
    virtual void addCondiments() = 0;
    void makeBeverage()
    {
        boil();
        brew();
        pourinCup();
        addCondiments();
    }
};

class Coffee : public AbstractDrinking
{
public:
    void boil()
    {
        cout << "煮农夫山泉" << endl;
    }
    void brew()
    {
        cout << "冲泡咖啡" << endl;
    }
    void pourinCup()
    {
        cout << "倒入杯中" << endl;
    }
    void addCondiments()
    {
        cout << "加糖" << endl;
    }
};

class Tea : public AbstractDrinking
{
public:
    void boil()
    {
        cout << "煮自来水" << endl;
    }
    void brew()
    {
        cout << "冲泡茶叶" << endl;
    }
    void pourinCup()
    {
        cout << "倒入杯中" << endl;
    }
    void addCondiments()
    {
        cout << "加柠檬" << endl;
    }
};

void doWork(AbstractDrinking *drinking)
{
    drinking->makeBeverage();
}

void test01()
{
    AbstractDrinking *coffee = new Coffee;
    doWork(coffee);
    delete coffee;

    AbstractDrinking *tea = new Tea;
    doWork(tea);
    delete tea;
}

int main()
{
    test01();
    return 0;
}
