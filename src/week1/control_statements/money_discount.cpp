#include <iostream>
using namespace std;

/*Ask the user how much money they have and then ask if they have a discount.

Decide what they can buy:

If they have 15–25 (no discount) → “You can buy a small hamburger.”
If they have 15–25 (with discount) → “You can buy a small hamburger and fries.”
If they have 26–50 (no discount) → “You can buy a large hamburger.”
If they have 26–50 (with discount) → “You can buy a large hamburger and fries.”
If they have more than 60, or between 50–60 with discount → “You can buy a meal with a drink.”*/

int main()
{
    double money;
    char discount;
    cout << "How much money do you have? " << endl;
    cin >> money;
    cout << "Do you have a discount? (y/n) " << endl;
    cin >> discount;

    if (money >= 15 && money <= 25)
    {
        if (discount == 'y')
        {
            cout << "You can buy a small hamburger and fries." << endl;
        }
        else
        {
            cout << "You can buy a small hamburger." << endl;
        }
    }
    else if (money > 25 && money <= 50)
    {
        if (discount == 'y')
        {
            cout << "You can buy a large hamburger and fries." << endl;
        }
        else
        {
            cout << "You can buy a large hamburger." << endl;
        }
    }
    else if (money > 60 || (money > 50 && discount == 'y'))
    {
        cout << "You can buy a meal with a drink." << endl;
    }
    else
    {
        cout << "You cannot afford anything. But I will pay for you." << endl;
    }

    return 0;
}