#include <iostream>
using namespace std;

int main() {
    double t1 = 0, t2 = 0, t3 = 0;
    double newTemp;

    // Take first three inputs initially
    std::cout << "Enter temperature: ";
    std::cin >> t1;

    std::cout << "Enter temperature: ";
    std::cin >> t2;

    std::cout << "Enter temperature: ";
    std::cin >> t3;

    while (true) {
        // Calculate average of last three values
        double average = (t1 + t2 + t3) / 3.0;

        std::cout << "Average of last three: " << average << std::endl;

        if (average > 25) {
            std::cout << "Alarm!" << std::endl;
        }

        // Shift values: discard oldest, move others
        t1 = t2;
        t2 = t3;

        // Take new input
        std::cout << "Enter temperature: ";
        std::cin >> t3;
    }

    return 0;
}