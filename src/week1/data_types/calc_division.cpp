#include <iostream>
#include <limits>
using namespace std;

int main()
{
    float volume1, volume2;
    cout << "Enter first volume: " << endl;
    cin >> volume1;
    cout << "Enter second volume: " << endl;
    cin >> volume2;

    float divideVolume = volume1 / volume2;

    if (volume2 == 0)
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    else
    {
        cout << "Each adventurers gets " << divideVolume << " units of volume of liquid." << endl;
    }

    cout << "Press Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}