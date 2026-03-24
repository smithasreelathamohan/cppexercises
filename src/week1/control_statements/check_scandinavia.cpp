#include <iostream>
using namespace std;

int main()
{
    string country;
    cout << "Enter your country: " << endl;
    cin >> country;

    if (country == "Sweden" || country == "Denmark" || country == "Norway")
    {
        cout << "You are from Scandinavia." << endl;
    }
    else
    {
        cout << "You are not from Scandinavia." << endl;
    }
    return 0;
}