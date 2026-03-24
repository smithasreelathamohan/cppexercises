#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 100);

    int bestScore = -1; // store lowest number of tries

    while (true)
    {
        int target = dist(gen);
        int attempts = 0;
        string input;

        cout << "\n--- New Game Started ---" << endl;
        cout << "Guess a number between 0 and 100 (or X to exit):" << endl;

        while (true)
        {
            cout << "Enter your guess: ";
            cin >> input;

            // Exit game completely
            if (input == "X" || input == "x")
            {
                cout << "Exiting game..." << endl;

                if (bestScore != -1)
                {
                    cout << "Best score (fewest attempts): " << bestScore << endl;
                }
                else
                {
                    cout << "No completed rounds." << endl;
                }
                return 0;
            }

            int guess;

            try
            {
                guess = stoi(input);
            }
            catch (...)
            {
                cout << "Invalid input! Try again." << endl;
                continue;
            }

            attempts++;

            if (guess < target)
            {
                cout << "Too low!" << endl;
            }
            else if (guess > target)
            {
                cout << "Too high!" << endl;
            }
            else
            {
                cout << "Correct! You guessed it in " << attempts << " tries." << endl;

                // Update high score
                if (bestScore == -1 || attempts < bestScore)
                {
                    bestScore = attempts;
                }
                break;
            }
        }

        // Ask to play again
        cout << "Play again? (Y/N): ";
        char choice;
        cin >> choice;

        if (choice != 'Y' && choice != 'y')
        {
            cout << "\nGame Over!" << endl;
            if (bestScore != -1)
            {
                cout << "Your best round: " << bestScore << " attempts." << endl;
            }
            break;
        }
    }

    return 0;
}