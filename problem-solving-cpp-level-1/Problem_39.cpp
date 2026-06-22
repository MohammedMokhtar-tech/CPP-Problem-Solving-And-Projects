/*
 * Problem Name: Bill Remainder Calculator
 * Description: Calculates the remainder (change) based on the total bill and the cash amount paid by the customer.
 * Input: Total bill amount (float) and total cash paid (float).
 * Output: Total bill, total cash paid, and the remainder.
 */

#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string message)
{
    float number;
    do
    {
        cout << message << ": ";
        cin >> number;
    } while (number < 0);

    return number;
}

float CalculateRemainder(float totalBill, float totalCashPaid)
{
    return totalCashPaid - totalBill;
}

int main()
{
    float totalBill = ReadPositiveNumber("Please enter total bill");
    float totalCashPaid = ReadPositiveNumber("Please enter total cash paid");

    cout << "\nTotal Bill = " << totalBill << endl;
    cout << "Total Cash Paid = " << totalCashPaid << endl;
    cout << "***************************" << endl;
    cout << "Remainder = " << CalculateRemainder(totalBill, totalCashPaid) << endl;

    return 0;
}
