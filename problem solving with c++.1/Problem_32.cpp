/*
Problem Name: Power of a Number
Description: This program reads two numbers and calculates the result of the second number raised to the power of the first number.
Input: Exponent (int), Base (int)
Output: Result (int)
*/

#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int number;
    cout << "Enter your number: ";
    cin >> number;
    return number;
}

int ReadPower()
{
    int power;
    cout << "Enter your power: ";
    cin >> power;
    return power;
}

int CalculatePower(int exponent, int base)
{
    if (exponent == 0)
    {
        return 0; // Maintaining original logic
    }

    int result = 1;
    for (int counter = 1; counter <= exponent; counter++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int result = CalculatePower(ReadNumber(), ReadPower());
    cout << "Result = " << result << endl;
    return 0;
}
