#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int chest1, chest2;
    cout << "Enter number of coins in chest1: " << endl;
    cin >> chest1;
    cout << "Enter number of coins in chest2: " << endl;
    cin >> chest2;

    int totalCoins = chest1 + chest2;

    cout << "Total coins: " << totalCoins << endl;
    cout << "Press Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
}