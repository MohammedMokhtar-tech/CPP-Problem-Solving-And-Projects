/*
Problem: ATM Login with Tries
Description: A program that simulates an ATM login with a limit of 3 attempts.
Input: PIN code string.
Output: Displays the account balance if the PIN is correct within 3 tries; otherwise, blocks the card.
*/

#include <iostream>
#include <string>

using namespace std;

string ReadPinCode()
{
    string pinCode;
    cout << "Please enter PIN code: ";
    cin >> pinCode;
    return pinCode;
}

bool Login()
{
    string pinCode;
    int counter = 3;

    do
    {
        pinCode = ReadPinCode();

        if (pinCode == "1234")
        {
            return true;
        }
        else
        {
            counter--;
            cout << "\033[1;31m";
            cout << "\nWrong PIN, you have " << counter << " more tries\n";
            cout << "\033[0m";
        }

    } while (counter >= 1 && pinCode != "1234");

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
    else
    {
        cout << "\033[1;31m";
        cout << "\nYour card is blocked. Call the bank for help.\n";
        cout << "\033[0m";
    }

    return 0;
}
