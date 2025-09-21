//冒泡排序案例,升序
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 2, 8, 0, 5};
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
;
    return 0;
}
