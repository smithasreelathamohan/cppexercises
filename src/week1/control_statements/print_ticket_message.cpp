#include <iostream>
using namespace std;

/* Ask the user to enter their category: adult, pensioner, or student.

If the user is a pensioner or student, print: “The ticket costs 20 SEK.”
If the user is an adult, print: “The ticket costs 30 SEK.”
Otherwise, print: “Invalid category entered.” */
int main()
{
    string category;
    cout << "Enter your category (adult, pensioner, or student): ";
    cin >> category;

    if (category=="pensioner" || category=="student")
    {
        cout << "The ticket costs 20 SEK." << endl;
    }
    else if (category=="adult")
    {
        cout << "The ticket costs 30 SEK." << endl;
    }
    else
    {
        cout << "Invalid category entered." << endl;
    }
    return 0;
}