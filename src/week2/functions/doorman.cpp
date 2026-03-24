#include <iostream>
using namespace std;

bool checkAge(int age)
{
    return age >= 18;
}

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    bool isAdult = checkAge(age);
    cout << "You are above 18: "
         << (isAdult ? "true" : "false") << endl;
}