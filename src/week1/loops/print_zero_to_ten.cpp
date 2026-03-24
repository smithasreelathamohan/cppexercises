#include <iostream>
using namespace std;

int main()
{
    cout << "for loop 1:" << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << "while loop :" << endl;
    int i = 0;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    cout << "do while loop :" << endl;
    int loopCounter = 0;
    int doWhileMax = 10;
    do
    {
        cout << loopCounter << endl;
    } while (loopCounter++ < doWhileMax);
    return 0;
}