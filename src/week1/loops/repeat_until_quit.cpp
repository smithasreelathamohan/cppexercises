#include <iostream>
using namespace std;

void printSum()
{
    int num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;

    cout << "The sum of the two numbers is: " << num1 + num2 << endl;
}
int main()
{
    char answer = 'n';
    do
    {
        printSum();
        cout << "Do you want to continue? (y/n)" << endl;
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');

    return 0;
}