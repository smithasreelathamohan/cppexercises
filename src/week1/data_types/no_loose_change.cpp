#include <iostream>

using namespace std;

int main()
{
    enum Currency
    {
        THOUSAND = 1000,
        FIVE_HUNDRED = 500,
        TWO_HUNDRED = 200,
        HUNDRED = 100,
        FIFTY = 50,
        TWENTY = 20,
        TEN = 10,
        FIVE = 5,
        TWO = 2,
        ONE = 1,

    };

    struct cash
    {
        int thousand;
        int five_hundred;
        int two_hundred;
        int hundred;
        int fifty;
        int twenty;
        int ten;
        int five;
        int two;
        int one;
    };

    int userAmount;
    int originalAmount;
    cash userCash;

    cout << "Enter the amount you want to withdraw: ";
    cin >> userAmount;
    originalAmount = userAmount;

    userCash.thousand = userAmount / THOUSAND;
    userAmount = userAmount % THOUSAND;
    userCash.five_hundred = userAmount / FIVE_HUNDRED;
    userAmount = userAmount % FIVE_HUNDRED;
    userCash.two_hundred = userAmount / TWO_HUNDRED;
    userAmount = userAmount % TWO_HUNDRED;
    userCash.hundred = userAmount / HUNDRED;
    userAmount = userAmount % HUNDRED;
    userCash.fifty = userAmount / FIFTY;
    userAmount = userAmount % FIFTY;
    userCash.twenty = userAmount / TWENTY;
    userAmount = userAmount % TWENTY;
    userCash.ten = userAmount / TEN;
    userAmount = userAmount % TEN;
    userCash.five = userAmount / FIVE;
    userAmount = userAmount % FIVE;
    userCash.two = userAmount / TWO;
    userAmount = userAmount % TWO;
    userCash.one = userAmount / ONE;

    cout << "Your entered amount: " << originalAmount << " SEK" << endl;
    cout << "You will receive these notes " << endl;
    cout << "1000s: " << userCash.thousand << " pcs" << endl;
    cout << "500s: " << userCash.five_hundred << " pcs" << endl;
    cout << "200s: " << userCash.two_hundred << " pcs" << endl;
    cout << "100s: " << userCash.hundred << " pcs" << endl;
    cout << "50s: " << userCash.fifty << " pcs" << endl;
    cout << "20s: " << userCash.twenty << " pcs" << endl;
    cout << "10s: " << userCash.ten << " pcs" << endl;
    cout << "5s: " << userCash.five << " pcs" << endl;
    cout << "2s: " << userCash.two << " pcs" << endl;
    cout << "1s: " << userCash.one << " pcs" << endl;
}