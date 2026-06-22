/*
Problem Name: Sum of Digits
Description: This program reads a positive integer and calculates the sum of its digits.
Input: A positive integer.
Output: The sum of the digits of the input number.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

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

int SumDigits(int number)
{
    int remainder = 0;
    int sum = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        sum += remainder;
    }
    return sum;
}

int main()
{
    int number = ReadPositiveNumber("Enter Your Number: ");
    int result = SumDigits(number);
    cout << "Sum of digits = " << result << endl;

    return 0;
}
