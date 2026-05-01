/*
 * Problem Name: Piggy Bank Calculator
 * Description: Calculates the total value of a piggy bank in pennies and dollars based on the number of pennies, nickels, dimes, quarters, and dollars provided.
 * Input: Number of pennies, nickels, dimes, quarters, and dollars.
 * Output: Total amount in pennies and total amount in dollars.
 */

#include <iostream>
#include <string>

using namespace std;

struct stPiggyBank
{
    int pennies, nickels, dimes, quarters, dollars;
};

stPiggyBank ReadPiggyBankContent()
{
    stPiggyBank piggyBank;

    cout << "Enter the total number of pennies: ";
    cin >> piggyBank.pennies;
    cout << "Enter the total number of nickels: ";
    cin >> piggyBank.nickels;
    cout << "Enter the total number of dimes: ";
    cin >> piggyBank.dimes;
    cout << "Enter the total number of quarters: ";
    cin >> piggyBank.quarters;
    cout << "Enter the total number of dollars: ";
    cin >> piggyBank.dollars;

    return piggyBank;
}

int CalculateTotalPennies(stPiggyBank piggyBank)
{
    int totalPennies = (piggyBank.pennies * 1) + (piggyBank.nickels * 5) +
                       (piggyBank.dimes * 10) + (piggyBank.quarters * 25) +
                       (piggyBank.dollars * 100);

    return totalPennies;
}

int main()
{
    int totalPennies = CalculateTotalPennies(ReadPiggyBankContent());

    cout << "\nTotal Pennies = " << totalPennies << endl;
    cout << "Total Dollars = $" << (float)totalPennies / 100 << endl;

    return 0;
}
