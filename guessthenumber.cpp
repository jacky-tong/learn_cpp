#include <iostream>
using namespace std;

int main()
{
    int num = rand() % 100 + 1; // Generate a random number between 1 and 100
    int val = 0;
    cin >> val;
    while (val != num)
    {
        if (val > num)
        {
            cout << "Too high! Try again: "<< endl;
        }
        else
        {
            cout << "Too low! Try again: "<< endl;
        }
        cin >> val;
    }
    cout << "You guessed it!" << endl;
}