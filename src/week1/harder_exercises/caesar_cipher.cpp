#include <iostream>
using namespace std;

int main()
{

    while (true)
    {
        string message = "";
        cout << "Enter message to be encrypted: ";
        getline(cin, message);
        cout << "Enter a number to shift the letters by: ";
        int numberOfLetters;
        cin >> numberOfLetters;
        string encryptedMessage = "";
        string decryptedMessage = "";
        for (char c : message)
        {
            if (isalpha(c))
            {
                char base = isupper(c) ? 'A' : 'a';
                encryptedMessage += (c - base + numberOfLetters) % 26 + base;
            }
            else
            {
                encryptedMessage += c; // Non-alphabetic characters remain unchanged
            }
        }
        cout << "Encrypted message: " << encryptedMessage << endl;

        for (char c : encryptedMessage)
        {
            if (isalpha(c))
            {
                char base = isupper(c) ? 'A' : 'a';
                decryptedMessage += (c - base - numberOfLetters + 26) % 26 + base;
            }
            else
            {
                decryptedMessage += c; // Non-alphabetic characters remain unchanged
            }
        }
        cout << "Decrypted message: " << decryptedMessage << endl;

        cout << "Do you want to encrypt another message? (Y/N): ";
        char choice;
        cin >> choice;
        cin.ignore();
        // cin.ignore(); // Clear the newline character from the input buffer
        if (choice != 'Y' && choice != 'y')
        {
            cout << "Exiting the program." << endl;
            break;
        }
    }

    return 0;
}