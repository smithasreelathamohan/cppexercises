#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers less than " << n << ": ";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}