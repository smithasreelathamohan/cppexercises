#include <iostream>

using namespace std;

int main()
{
    int inputMinutes, hours, minutes;
    cout << "Enter your minutes: " << endl;
    cin >> inputMinutes;
    hours = inputMinutes / 60;
    minutes = inputMinutes % 60;
    cout << "Time: " << hours << " hours and " << minutes << " minutes." << endl;
    return 0;
}