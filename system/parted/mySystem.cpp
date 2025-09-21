#include<iostream>
#include<string>
#include "mySystem.h"

using namespace std;

void showMenu()
{
    cout << "***********************************" << endl;
    cout << "*****  1. 添加联系人          *****" << endl;
    cout << "*****  2. 显示联系人          *****" << endl;
    cout << "*****  3. 删除联系人          *****" << endl;
    cout << "*****  4. 查找联系人          *****" << endl;
    cout << "*****  5. 修改联系人          *****" << endl;
    cout << "*****  6. 清空联系人          *****" << endl;
    cout << "*****  0. 退出通讯录系统      *****" << endl;
    cout << "***********************************" << endl;
}



//添加联系人函数
void addPerson(AddressBook* abs)
{
    if (abs->m_Size >= MAX) //判断是否超过最大联系人数量
    {
        cout << "通讯录已满，无法添加更多联系人！" << endl;
    }
    else
    {
        cout << "请输入联系人姓名：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Name; //将姓名存入通讯录

        int sex = 0;
        cout << "请输入联系人性别：" << endl;
        cout << "1. 男" << endl;
        cout << "2. 女" << endl;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex; //将性别存入通讯录
                break;
            }
            else
            {
                cout << "请输入正确的性别！" << endl;
            }
        }

        cout << "请输入联系人年龄：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Age; //将年龄存入通讯录

        cout << "请输入联系人电话：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Phone; //将电话存入通讯录

        cout << "请输入联系人地址：" << endl;
        cin >> abs->personArray[abs->m_Size].m_Addr; //将地址存入通讯录

        abs->m_Size++; //联系人数量加1
        cout << "联系人添加成功！" << endl;

        system("pause"); //暂停，等待用户按键
        system("cls"); //清屏

    }

}

//显示联系人函数
void showPerson(AddressBook* abs)
{
    if (abs->m_Size == 0) //判断通讯录是否为空
    {
        cout << "通讯录为空！" << endl;
    }
    else //通讯录不为空
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名：" << abs->personArray[i].m_Name << "\t";
            cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女" )<< "\t";
            cout << "年龄：" << abs->personArray[i].m_Age << "\t";
            cout << "电话：" << abs->personArray[i].m_Phone << "\t";
            cout << "地址：" << abs->personArray[i].m_Addr << endl;
        }
    }
    system("pause"); //暂停，等待用户按键
    system("cls"); //清屏
}


//检测联系人是否存在，存在返回下标，不存在返回-1
int isExist(AddressBook* abs, string name)
{ 
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name) //如果找到联系人
        {
            return i; //返回下标
        }
    }
    return -1; //未找到联系人，返回-1
}

//删除联系人函数
void deletePerson(AddressBook* abs)
{ 
    cout << "请输入要删除的联系人姓名：" << endl;
    string name;
    cin >> name;
    if (isExist(abs, name) != -1) //如果联系人存在
    {
        int index = isExist(abs, name); //获取联系人下标
        for (int i = index; i < abs->m_Size - 1; i++) //将后面的联系人前移
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--; //联系人数量减1
        cout << "联系人删除成功！" << endl;
    }
    else //如果联系人不存在
    {
        cout << "联系人不存在！" << endl;
    }
    system("pause");
    system("cls"); //清屏
}

//查找联系人函数
void findPerson(AddressBook* abs)
{
    cout << "请输入要查找的联系人姓名：" << endl;
    string name;
    cin >> name;
    int index = isExist(abs, name); //获取联系人下标
    if (index != -1) //如果联系人存在
    {
        cout << "姓名：" << abs->personArray[index].m_Name << "\t";
        cout << "性别：" << (abs->personArray[index].m_Sex == 1 ? "男" : "女") << "\t";
        cout << "年龄：" << abs->personArray[index].m_Age << "\t";
        cout << "电话：" << abs->personArray[index].m_Phone << "\t";
        cout << "地址：" << abs->personArray[index].m_Addr << endl; 
    }
    else //如果联系人不存在
    {
        cout << "联系人不存在！" << endl;
    }
    system("pause"); //暂停，等待用户按键
    system("cls"); //清屏
}

//修改联系人函数
void modifyPerson(AddressBook* abs)
{
    cout << "请输入要修改的联系人姓名：" << endl;
    string name;
    cin >> name;
    int index = isExist(abs, name); //获取联系人下标
    if (index != -1) //如果联系人存在
    {
        cout << "请输入新的姓名：" << endl;
        cin >> abs->personArray[index].m_Name; //修改姓名
        cout << "请输入新的性别：" << endl; 
        cout << "1. 男" << endl;
        cout << "2. 女" << endl;
        cin >> abs->personArray[index].m_Sex; //修改性别
        cout << "请输入新的年龄：" << endl;
        cin >> abs->personArray[index].m_Age; //修改年龄
        cout << "请输入新的电话：" << endl;
        cin >> abs->personArray[index].m_Phone; //修改电话
        cout << "请输入新的地址：" << endl;
        cin >> abs->personArray[index].m_Addr; //修改地址
        cout << "联系人修改成功！" << endl;
    }
    else //如果联系人不存在
    {
        cout << "联系人不存在！" << endl;
    }
    system("pause"); //暂停，等待用户按键
    system("cls"); //清屏
}

//清空联系人函数
void clearPerson(AddressBook* abs)
{
    abs->m_Size = 0; //清空联系人数量
    cout << "通讯录已清空！" << endl;
    system("pause"); //暂停，等待用户按键
    system("cls"); //清屏
}