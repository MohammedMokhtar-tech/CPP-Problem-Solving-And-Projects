/*
 * Problem Name: Service Fee and Tax Calculator
 * Description: Calculates the final bill amount by adding a 10% service fee and then a 16% sales tax to the initial total bill.
 * Input: Total bill amount (float).
 * Output: The original bill and the final total bill after service and tax.
 */

#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string message)
{
    float number = 0;
    do
    {
        cout << message << ": ";
        cin >> number;
    } while (number <= 0);

    return number;
}

float CalculateTotalBillAfterServiceAndTax(float totalBill)
{
    // Apply 10% service fee
    totalBill = totalBill * 1.1f;

    // Apply 16% sales tax
    totalBill = totalBill * 1.16f;

    return totalBill;
}

int main()
{
    float totalBill = ReadPositiveNumber("Please enter the initial total bill");

    cout << "\nTotal Bill = " << totalBill << endl;
    cout << "Total Bill After Service and Tax = " << CalculateTotalBillAfterServiceAndTax(totalBill) << endl;

    return 0;
}
