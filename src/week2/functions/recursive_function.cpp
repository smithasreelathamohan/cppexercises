#include <iostream>
#include <random>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

// Recursive function to reach the target number
int reachTarget(int userInput, int tries = 0, int limit = 100)
{
    static int total = 0; // Static variable to track total
    tries++;

    if (tries > limit)
    {              // Stop recursion after limit
        total = 0; // Reset total for next run
        return -1;
    }

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, userInput);

    int randNum = dist(gen);
    cout << "Try " << tries << ": Generated random number " << randNum << "." << endl;

    if (total < userInput)
    {
        cout << "Total (" << total << ") is less than user input (" << userInput << "). Adding " << randNum << "." << endl;
        total += randNum;
        cout << "New total: " << total << endl;
    }
    else if (total > userInput)
    {
        cout << "Total (" << total << ") is greater than user input (" << userInput << "). Subtracting " << randNum << "." << endl;
        total -= randNum;
        cout << "New total: " << total << endl;
    }

    if (total == userInput)
    {
        cout << "Total (" << total << ") has reached the user input (" << userInput << ") in " << tries << " tries!" << endl;
        int result = tries;
        total = 0; // Reset total for next run
        return result;
    }

    return reachTarget(userInput, tries, limit);
}

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    int userInput;
    std::cout << "Enter a number between 1 and 10: ";
    std::cin >> userInput;

    if (userInput < 1 || userInput > 10)
    {
        std::cout << "Invalid input! Please enter a number between 1 and 10." << std::endl;
        return 1;
    }

    // Run the recursive calculation 10 times
    std::cout << "Running 10 iterations:\n";
    for (int i = 1; i <= 10; i++)
    {
        int result = reachTarget(userInput);
        if (result == -1)
        {
            std::cout << "Iteration " << i << ": Did not reach target within 100 tries.\n";
        }
        else
        {
            std::cout << "Iteration " << i << ": Reached target in " << result << " tries.\n";
        }
    }

    return 0;
}
