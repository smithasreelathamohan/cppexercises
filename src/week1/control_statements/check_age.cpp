#include <iostream>
/* Ask the user to enter their age.

If the age is less than 18, print: “You are not an adult.”
If the age is over 65, print: “You are a pensioner.”
Otherwise, print: “You are an adult but not a pensioner.”
Bonus Task: Check that the input is a valid number. If the user enters anything other than digits, print: “Invalid input. Please enter a valid age.”*/
int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if (age >= 18)
        std::cout << "You are an adult.\n";
    else if (age > 65)
    {
        std::cout << "You are a pensioner.\n";
    }
    else
    {
        std::cout << "You are an adult but not a pensioner..\n";
    }
    return 0;
}
