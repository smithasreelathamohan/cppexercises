#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number: " << endl;
        cin >> number;
        sum += number;
    }
    cout << "The sum of the numbers you entered is: " << sum << endl;
}