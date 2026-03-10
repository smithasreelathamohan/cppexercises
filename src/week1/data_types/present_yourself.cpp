#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    struct Person
    {
        string name;
        int age;
        string address;
        string phone_number;
        string email;
    };

    Person P1;

    cout << "Please enter your name: " << endl;
    getline(cin, P1.name);
    cout << "Please enter your age: " << endl;
    cin >> P1.age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please enter your address: " << endl;
    getline(cin, P1.address);
    cout << "Please enter your phone number: " << endl;
    cin >> P1.phone_number;
    cout << "Please enter your email: " << endl;
    cin >> P1.email;

    cout << "-----------Your Digital Passport----------" << endl;
    cout << "|       Name: " << P1.name << endl;
    cout << "|       Age: " << P1.age << endl;
    cout << "|       Address: " << P1.address << endl;
    cout << "|       Phone Number: " << P1.phone_number << endl;
    cout << "|       Email: " << P1.email << endl;
    cout << "------------------------------------------" << endl;
    return 0;
}