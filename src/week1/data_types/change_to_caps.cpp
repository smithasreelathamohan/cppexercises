#include <iostream>
using namespace std;

int main()
{
    char input[100];
    cout << "Enter lower case string: ";
    cin.getline(input, 100);

    for (int i = 0; input[i] != '\0'; i++)
    {
        input[i] = toupper(input[i]);
    }
    cout << "Your uppercase string: " << input << endl;
    return 0;
}