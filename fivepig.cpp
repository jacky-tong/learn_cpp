//5只小猪称体重，看谁最重
#include <iostream>
using namespace std;

int main()
{
    int pig[5] = { 50, 60, 55, 70, 65 };
    int i, max;
    max = pig[0];
    for (i = 1; i < 5; i++)
        if (pig[i] > max)
            max = pig[i];
    cout << "最重的小猪的体重是：" << max <<endl;
}