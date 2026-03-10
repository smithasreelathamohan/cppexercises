#include <iostream>
using namespace std;

/*You are about to loose in a wordfeud game, luckily your programming skills comes in handy. Write a program that takes in two words and the combines the first half of the first word with the second half of the second word.*/
int main()
{
    string word1, word2;
    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;

    int len1 = word1.length();
    int len2 = word2.length();

    string half1 = word1.substr(0, len1 / 2);
    string half2 = word2.substr(len2 / 2, len2 / 2 + 1);

    cout << "Combined word: " << half1 << half2 << endl;

    return 0;
}