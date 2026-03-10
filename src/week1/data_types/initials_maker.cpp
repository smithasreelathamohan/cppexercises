#include <iostream>
#include <string>
using namespace std;

/*Everything is in such a hurry, we need you to be named after your initials from now on. Make a program that takes in your full name and then prints out your initials.*/
int main()
{
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);

    string initials;
    for (int i = 0; i < fullName.length(); ++i)
    {
        if (i == 0 || fullName[i - 1] == ' ')
        {
            initials += toupper(fullName[i]);
        }
    }
    cout << "Your initials are: " << initials << endl;
    return 0;
}