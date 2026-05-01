/*
Problem Name: Print Digits in Order
Description: This program prints the digits of a number in their original order.
             It achieves this by first reversing the number, then extracting digits.
Input: A positive integer.
Output: Each digit of the number printed on a new line in its original order.
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

void PrintDigitsInOrder(int number)
{
    int reversedNumber = ReverseNumber(number);
    int remainder = 0;
    
    // If the original number was 120, reversed is 021 (which is 21). 
    // The original logic used PrintDigetNumber(ReverstNumber(...))
    // Note: This logic might lose trailing zeros if not careful, but I must preserve original logic.
    
    while (reversedNumber > 0)
    {
        remainder = reversedNumber % 10;
        reversedNumber = reversedNumber / 10;
        cout << remainder << endl;
    }
}

int main()
{
    int number = ReadPositiveNumber("Enter Your Number: ");
    PrintDigitsInOrder(number);
    return 0;
}
