//展示goto语句的功能,但不推荐使用，因为 goto语句的用法不灵活，不方便阅读
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    start:
    cout << i << " ";
    i++;
    if (i < 10)
        goto start;
    return 0;
}