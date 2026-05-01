/*
Problem Name: Reverse Number
Description: This program reads a positive integer and reverses its digits.
Input: A positive integer.
Output: The number with its digits in reverse order.
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

int ReverseNumber(int number)
{
    int remainder = 0;
    int reversedNumber = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }
    return reversedNumber;
}

int main()
{
    int number = ReadPositiveNumber("Enter Your Number: ");
    cout << "Reversed Number: " << ReverseNumber(number) << endl;
    return 0;
}
