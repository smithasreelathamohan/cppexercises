#include <iostream>
using namespace std;

int main()
{
    try
    {
    string sentence;
    cout << "Enter a sentence: " << endl;
    getline(cin, sentence);

    char vowel[] = {'a', 'e', 'i', 'o', 'u'};

    int stringLength = sentence.length();

    for (int i = 0; i < stringLength; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sentence[i] == vowel[j] || sentence[i] == toupper(vowel[j]))
            {
                sentence[i] = '*';
            }
        }
    }
    cout << "Secret sentence: " << sentence << endl;
    }
    catch(exception& e){
        cout << "An error occurred: " << e.what() << endl;
    }
    return 0;
}
