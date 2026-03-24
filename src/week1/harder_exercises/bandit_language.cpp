#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        string name;
        cout << "Enter your name: " << endl;
        getline(cin, name);
        string result = "";
        char vowel[] = {'a', 'e', 'i', 'o', 'u'};

        for (int i = 0; i < name.length(); i++)
        {
            int counter = 0;
            for (char v : vowel)
            {
                if (name[i] == v || name[i] == toupper(v))
                {
                    counter++;
                    break;
                }
            }

            if (counter == 0)
            {                
                char consonent = name[i];               
                result += 'o';
                result += name[i];
                
            }
            else
            {
                result += name[i];
                
            }
        }
        cout << "Bandit name: " << result << endl;
    }
    catch (exception &e)
    {
        cout << "An error occurred: " << e.what() << endl;
    }

    return 0;
}