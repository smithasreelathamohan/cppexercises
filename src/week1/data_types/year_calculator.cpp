#include <iostream>
using namespace std;

int main()
{
    int birthyear, currentyear, age;
    cout<< "ENTER TOUR BIRTH YEAR: ";
    cin>> birthyear;

    currentyear= 2026;
    age= currentyear- birthyear;
    cout<< "YOUR AGE IN 2026 IS: "<< age<< endl;
    return 0;
}