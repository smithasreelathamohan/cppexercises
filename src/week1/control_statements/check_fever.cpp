#include <iostream>
using namespace std;

/*Ask the user to enter their temperature from a thermometer.

If the temperature is above 39.5, print: “You should see a doctor.”
Else if it is above 37.8, print: “You have a fever.”
If the temperature is below or equal to 37.8, print: “You do not have a fever.”*/
int main()
{
    double temperature;
    cout << "Enter your temperature: ";
    cin >> temperature;

    if (temperature > 39.5)
    {
        cout << "You should see a doctor." << endl;
    }
    else if (temperature > 37.8)
    {
        cout << "You have a fever." << endl;
    }
    else
    {
        cout << "You do not have a fever." << endl;
    }

    return 0;
}