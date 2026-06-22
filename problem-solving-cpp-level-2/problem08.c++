/*
Problem Name: Digit Frequency
Description: This program counts how many times a specific digit appears in a given number.
Input: A main number (positive integer) and a single digit to check.
Output: The frequency of the digit in the number.
*/

#include <iostream>
#include <string>

using namespace std;

// Approach 1: Simple procedural approach
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

int CountDigitFrequency(short digitToCheck, int number)
{
    int freqCount = 0;
    int remainder = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        if (digitToCheck == remainder)
        {
            freqCount++;
        }
    }
    return freqCount;
}

// Approach 2: Using a Struct (as seen in original comments)
struct stNumberData
{
    int number;
    int digit;
};

stNumberData ReadNumberData()
{
    stNumberData data;
    cout << "--- Struct Approach ---" << endl;
    cout << "Enter Main Number: ";
    cin >> data.number;
    cout << "Enter Digit to Check: ";
    cin >> data.digit;
    return data;
}

int GetDigitFrequencyStruct(stNumberData data)
{
    int frequency = 0;
    int remainder = 0;
    int tempNumber = data.number;
    while (tempNumber > 0)
    {
        remainder = tempNumber % 10;
        tempNumber = tempNumber / 10;
        if (remainder == data.digit)
        {
            frequency++;
        }
    }
    return frequency;
}

int main()
{
    // Solution 1
    int mainNumber = ReadPositiveNumber("Please enter the main number?");
    short digit = (short)ReadPositiveNumber("Please enter one digit to check?");
    cout << "\nDigit " << digit << " Frequency is "
         << CountDigitFrequency(digit, mainNumber) << " Time(s).\n" << endl;

    // Solution 2
    stNumberData data = ReadNumberData();
    cout << "Digit Frequency (Struct Approach): " << GetDigitFrequencyStruct(data) << endl;

    return 0;
}
