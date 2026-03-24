#include    <iostream>
#include    <iomanip>       

using namespace std;

/*Create a function that calculates how much the VAT (sales tax) is for a given amount. The amount should be an input parameter of type float and the VAT percentage should be controlled by an Enum.

The function should return the VAT value.*/
enum VATPercentage
{
    LOW = 10,
    MEDIUM = 20,
    HIGH = 25
};

float TaxCalculator(float amount, VATPercentage vat)
{
    float vatValue = 0.0f;
    switch (vat)
    {
    case LOW:
        vatValue = amount * 0.1f;
        break;
    case MEDIUM:
        vatValue = amount * 0.2f;
        break;
    case HIGH:
        vatValue = amount * 0.25f;
        break;
    }
    return vatValue;
}

int main()
{
    float amount;
    VATPercentage vat;

    cout << "Enter the amount: ";
    cin >> amount;

    cout << "Select VAT percentage (0 for LOW, 1 for MEDIUM, 2 for HIGH): ";
    int vatChoice;
    cin >> vatChoice;

    switch (vatChoice)
    {
    case 0:
        vat = LOW;
        break;
    case 1:
        vat = MEDIUM;
        break;
    case 2:
        vat = HIGH;
        break;
    default:
        cout << "Invalid choice. Defaulting to LOW VAT." << endl;
        vat = LOW;
        break;
    }

    float vatValue = TaxCalculator(amount, vat);
    cout << "The VAT value is: " << vatValue << endl;

    return 0;
}