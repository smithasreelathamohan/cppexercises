#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findLongestWord(vector<string> words)
{
    string longestWord = "";
    for (const string &word : words)
    {
        if (word.length() > longestWord.length())
        {
            longestWord = word;
        }
    }

    return longestWord;
}

int main()
{
    vector<string> words;
    cout << "Enter words (or 'exit' to stop): ";
    string input;
    while (true)
    {
        cin >> input;
        if (input == "exit")
            break;
        words.push_back(input);
    }
    cout << "The longest word is: " << findLongestWord(words) << endl;
    return 0;
}