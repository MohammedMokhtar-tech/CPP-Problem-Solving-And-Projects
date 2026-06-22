/*
Problem Name: All Digits Frequency
Description: This program counts and prints the frequency of each digit (0-9) that appears in a given number.
Input: A positive integer.
Output: A list showing each digit found in the number and how many times it repeated.
*/

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

int GetDigitFrequency(short digitToCheck, int number)
{
    int frequency = 0;
    int remainder = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        if (digitToCheck == remainder)
        {
            frequency++;
        }
    }
    return frequency;
}

void PrintAllDigitsFrequency(int number)
{
    cout << "\nDigit Frequencies in " << number << ":" << endl;
    for (int i = 0; i <= 9; i++)
    {
        int frequency = GetDigitFrequency(i, number);
        if (frequency > 0)
        {
            cout << "Digit " << i << " frequency is " << frequency << " time(s)." << endl;
        }
    }
}

int main()
{
    int number = ReadPositiveNumber("Enter your number: ");
    PrintAllDigitsFrequency(number);
    return 0;
}
