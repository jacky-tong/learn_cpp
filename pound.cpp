// 指针常量 指针的指向不可以改变，但指针本身指向的值可以改变：int* const p = &a; *p = 10;
// 常量指针 指针的指向可以改变，但指针本身指向的值不可以改变：const int* p = &a; p = &b;
// 常量指针常量 指针的指向不可以改变，指针本身指向的值也不可以改变：const int* const p = &a; 
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 10;
    const int * p = &a;// 常量指针，指向的值不可以改变，但指针本身可以改变
    cout << "p指向的值: " << *p << endl; // 输出10
    p = &b; // 可以改变指针p的指向

    int * const p2 = &a;// 指针常量，指向的值可以改变，但指针本身不可以改变
    cout << "p2指向的值: " << *p2 << endl; // 输出10
    *p2 = 20; // 可以改变指针p2指向的值
    
    return 0;
}