#include <iostream>
#include <cstdlib>
#include "mySystem.h"

using namespace std;
#define MAX 1000 //定义最大联系人数量


int main()
{
    AddressBook abs; //创建通讯录对象
    abs.m_Size = 0; //初始化联系人数量为0

    int select = 0; //创建用户选择输入的变量

    while (true) //循环显示菜单
    {
        system("cls"); //清屏
        cout << "欢迎使用通讯录管理系统" << endl;
        showMenu();//调用菜单显示函数
        cin >> select;

        switch (select)
        {
        case 1:
            cout << "添加联系人" << endl;
            addPerson(&abs); //调用添加联系人函数
            break;

         case 2:
            cout << "显示联系人" << endl;
            showPerson(&abs); //调用显示联系人函数
            break;
        case 3:
            cout << "删除联系人" << endl;
            deletePerson(&abs); //调用删除联系人函数
            break;
        case 4:
            cout << "查找联系人" << endl;
            findPerson(&abs); //调用查找联系人函数
            break;
        case 5:
            cout << "修改联系人" << endl;
            modifyPerson(&abs); //调用修改联系人函数
            break;
        case 6:
            cout << "清空联系人" << endl;
            clearPerson(&abs); //调用清空联系人函数
            break;
        case 0:
            cout << "退出通讯录" << endl;
            system("pause");
            return 0; //退出程序
            break;
        default:
            break;
        }
        // 添加暂停，让用户能看到输出结果
        system("pause");
    }
}