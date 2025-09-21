#include <iostream>
#include <string>
using namespace std;
#define MAX 1000 //定义最大联系人数量

//定义联系人结构体
struct Person
{
    string m_Name;//姓名
    int m_Sex;//性别 2-女 1-男
    int m_Age;//年龄
    string m_Phone;//电话
    string m_Addr;//地址
};

//定义通讯录结构体
struct AddressBook
{
    Person personArray[MAX]; //联系人数组
    int m_Size; //当前联系人数量
};

void showMenu();
void addPerson(AddressBook* abs);
void showPerson(AddressBook* abs);
int isExist(AddressBook* abs, string name);
void deletePerson(AddressBook* abs);
void modifyPerson(AddressBook* abs);
void findPerson(AddressBook* abs);
void clearPerson(AddressBook* abs);

