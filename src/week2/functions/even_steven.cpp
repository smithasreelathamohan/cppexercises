#include <iostream>
#include <vector>
using namespace std;

int checkEven(vector<int> numbers)
{
    int evenCount = 0;
    for (const int &number : numbers)
    {
        if (number % 2 == 0)
        {
            evenCount++;
        }
    }
    return evenCount;
}

int main()
{

    int counter = 0;
    cout << "How many numbers you want to enter? ";
    cin >> counter;

    vector<int> numbers(counter);
    cout << "Enter " << counter << " numbers: ";

    for (int i = 0; i < counter; i++)
    {
        cin >> numbers[i];
    }

    cout << "You have entered " << checkEven(numbers) << " even numbers." << endl;
    return 0;
}