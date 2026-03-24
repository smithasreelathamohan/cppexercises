#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers:" << endl;
    int start, end;
    cin >> start >> end;
    cout << "for loop :" << endl;
    cout << "Numbers between " << start << " and " << end << " are:" << endl;
    for (int i = start + 1; i < end; i++)
    {
        cout << i << ", ";
    }
    cout << endl;

    cout << "while loop :" << endl;
    while (start < end-1)
    {
        start++;
        cout << start << ", ";
        }
    cout << endl;
    return 0;
}