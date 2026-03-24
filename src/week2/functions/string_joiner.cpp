#include  <iostream>
#include  <string>
using namespace std;

string StringJoiner(string str1, string str2)
{
    return str1 + " " + str2;
}

int main()
{
    string firstString, secondString;
    cout << "Enter the first string: ";
    getline(cin, firstString);
    cout << "Enter the second string: ";
    getline(cin, secondString);

    string result = StringJoiner(firstString, secondString);
    cout << "Joined string: " << result << endl;

    return 0;
}