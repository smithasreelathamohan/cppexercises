#include <iostream>
using namespace std;

/*Ask the user how many milk cartons are left.

If the number is less than 10, print: "Order 30 cartons.”
If the number is between 10 and 20 (inclusive), print: “Order 20 cartons.”
Otherwise, print: “You don’t need to order any milk.”
*/
int main()
{
    int milk_cartons;
    cout << "how many milk cartoons are left?" << endl;
    cin >> milk_cartons;
    if (milk_cartons < 10)
    {
        cout << "Order 30 cartons." << endl;
    }
    else if (milk_cartons >= 10 && milk_cartons <= 20)
    {
        cout << "Order 20 cartons." << endl;
    }
    else
    {
        cout << "You don’t need to order any milk." << endl;
    }
    return 0;
}