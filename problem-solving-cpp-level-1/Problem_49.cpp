/*
Problem: Simple ATM Login
Description: A program that simulates an ATM login by requesting a PIN code and checking it against a predefined value.
Input: PIN code string.
Output: Displays the account balance if the PIN is correct, otherwise repeatedly asks for the PIN.
*/

#include <iostream>
#include <string>

using namespace std;

bool Login()
{
    string pinCode;
    do
    {
        cout << "Please enter PIN code: \n";
        cin >> pinCode;

        if (pinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "\033[1;31mWrong PIN\033[0m\n";
        }
    } while (pinCode != "1234");

    return false;
}

int main()
{
    if (Login())
    {
        cout << "\033[1;32m";
        cout << "\nYour account balance is " << 7500 << '\n';
        cout << "\033[0m";
    }

    return 0;
}
