#include <iostream>
#include <string>
using namespace std;

int main() {
    double currentNumber = 0;
    double nextNumber = 0;
    char op = 0;
    string input;

    bool hasNumber = false;
    bool hasOperator = false;

    while (true) {
        cout << "Enter number/operator (or X to exit): ";
        cin >> input;

        // Exit condition
        if (input == "X" || input == "x") {
            cout << "Calculator stopped." << endl;
            break;
        }

        // Check if input is operator
        if (input == "+" || input == "-" || input == "*" || input == "/") {
            op = input[0];
            hasOperator = true;
            cout << "Operator set to: " << op << endl;
        }
        else {
            // Assume input is number
            double value = stod(input);

            if (!hasNumber) {
                currentNumber = value;
                hasNumber = true;
                cout << "Current number: " << currentNumber << endl;
            }
            else if (!hasOperator) {
                // Replace previous number
                currentNumber = value;
                cout << "Replaced number: " << currentNumber << endl;
            }
            else {
                // Perform calculation
                nextNumber = value;

                double result = 0;

                switch (op) {
                    case '+': result = currentNumber + nextNumber; break;
                    case '-': result = currentNumber - nextNumber; break;
                    case '*': result = currentNumber * nextNumber; break;
                    case '/':
                        if (nextNumber != 0)
                            result = currentNumber / nextNumber;
                        else {
                            cout << "Error: Division by zero!" << endl;
                            continue;
                        }
                        break;
                }

                cout << currentNumber << " " << op << " " << nextNumber
                     << " = " << result << endl;

                // Store result for next operation
                currentNumber = result;
                hasOperator = false;
            }
        }
    }

    return 0;
}