//考试成绩统计，用二维数组
//张三 100，100，100
//李四 90，90，90
//王五 60，80，80
//要求分别输出三名同学总成绩
#include <iostream>
using namespace std;
int main()
{
    int score[3][3] = 
    {
        {100,100,100},
        {90,90,90},
        {60,80,80}
    };
    int sum[3] = {0};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum[i] += score[i][j];
        }
        cout << "姓名：" << i + 1 << " 总成绩：" << sum[i] << endl;
    }
}