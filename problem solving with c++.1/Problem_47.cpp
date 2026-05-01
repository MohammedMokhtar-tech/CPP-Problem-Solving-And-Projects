/*
Problem: Loan Installment Months
Description: A program that calculates how many months are needed to settle a loan based on the loan amount and monthly installment.
Input: Loan amount, monthly installment.
Output: Total months to pay.
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

float CalculateTotalMonths(float loanAmount, float monthlyInstallment)
{
    return (float)loanAmount / monthlyInstallment;
}

int main()
{
    float loanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float monthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment?");

    cout << "\nTotal Months to pay = " << CalculateTotalMonths(loanAmount, monthlyInstallment) << endl;

    return 0;
}
