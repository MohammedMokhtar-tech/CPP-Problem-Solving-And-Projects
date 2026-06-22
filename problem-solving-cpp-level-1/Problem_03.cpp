/**
 * Problem Name: Check Odd or Even
 * Description: This program reads a number from the user and determines if it is odd or even.
 * Input: User enters an integer.
 * Output: Prints whether the number is odd or even.
 */

#include <iostream>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
    int number;
    cout << "enter your number " << endl;
    cin >> number;
    return number;
}

enNumberType CheckNumberType(int number)
{
    int result = number % 2;
    if (result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType numberType)
{
    if (numberType == enNumberType::Even)
        cout << "your number is even \n";
    else
        cout << "your number is odd \n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}
