/*
Problem: Monthly Loan Installment
Description: A program that calculates the monthly installment amount needed to settle a loan over a given number of months.
Input: Loan amount, total months.
Output: Monthly installment amount.
*/

#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string message)
{
    float number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

float CalculateMonthlyInstallment(float loanAmount, float howManyMonths)
{
    return (float)loanAmount / howManyMonths;
}

int main()
{
    float loanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float howManyMonths = ReadPositiveNumber("How Many Months?");

    cout << "\nMonthly Installment = " << CalculateMonthlyInstallment(loanAmount, howManyMonths) << endl;

    return 0;
}
