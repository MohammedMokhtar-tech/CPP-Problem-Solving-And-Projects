/*
 * Problem Name: Sales Commission Calculator
 * Description: Calculates the commission percentage and total commission based on the total sales amount provided by the user.
 * Input: Total sales amount (float).
 * Output: Commission percentage and total commission amount (float).
 */

#include <iostream>
#include <string>

using namespace std;

float ReadTotalSales()
{
    float totalSales;
    cout << "Please enter the total sales amount: ";
    cin >> totalSales;

    return totalSales;
}

float GetCommissionPercentage(float totalSales)
{
    if (totalSales >= 1000000)
        return 0.01f;
    else if (totalSales >= 500000)
        return 0.02f;
    else if (totalSales >= 100000)
        return 0.03f;
    else if (totalSales >= 50000)
        return 0.05f;
    else
        return 0.00f;
}

float CalculateTotalCommission(float totalSales)
{
    return GetCommissionPercentage(totalSales) * totalSales;
}

int main()
{
    float totalSales = ReadTotalSales();

    cout << "\nCommission Percentage = " << GetCommissionPercentage(totalSales) * 100 << "%" << endl;
    cout << "Total Commission = " << CalculateTotalCommission(totalSales) << endl;

    return 0;
}
