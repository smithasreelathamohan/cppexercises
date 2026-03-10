#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;
    if (number > 10)
    {
        cout << "The number is greater than 10." << endl;
    }
    else if (number < 10)
    {
        cout << "The number is less than 10." << endl;
    }
    else
    {
        cout << "The number is equal to 10." << endl;
    }
}