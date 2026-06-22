/*
Problem Name: Print Digits in Reverse Order
Description: This program reads a positive integer and prints its digits individually in reverse order.
Input: A positive integer.
Output: Each digit of the number printed on a new line, starting from the last digit.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Approach 1: Using Mathematical operations (Numerical)
int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

void PrintDigitsReversed(int number)
{
    int remainder = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        cout << remainder << endl;
    }
}

// Approach 2: Using String manipulation
string ReadNumberAsString()
{
    string number;
    cout << "Enter your number (as string approach): " << endl;
    cin >> number;
    return number;
}

void PrintDigitsReversedString(string number)
{
    int length = number.length();
    for (int i = length - 1; i >= 0; i--)
    {
        cout << number[i] << endl;
    }
}

int main()
{
    // Solution 1
    cout << "--- Mathematical Solution ---" << endl;
    PrintDigitsReversed(ReadPositiveNumber("Enter Your Number: "));

    cout << "\n--- String Solution ---" << endl;
    // Solution 2
    PrintDigitsReversedString(ReadNumberAsString());

    return 0;
}
