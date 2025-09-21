//水仙花数指一个3位数，他的每个位上的数字的立方和等于它本身。
//例如：153 = 1^3 + 5^3 + 3^3
#include <iostream>
using namespace std;

int main()
{
    // 遍历所有三位数
    int num = 100;
    do
    {
        int a = num / 100;
        int b = num / 10 % 10;
        int c = num % 10;
        if (a*a*a + b*b*b + c*c*c == num) 
        {
            cout << num << " is a narcissistic number." << endl;
        }
        num++;
        
    } while (num <= 999);
    
}