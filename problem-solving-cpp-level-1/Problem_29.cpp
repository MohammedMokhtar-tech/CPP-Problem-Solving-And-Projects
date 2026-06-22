/*
Problem Name: Sum Even Numbers from 0 to N
Description: This program reads a number N from the user and calculates the sum of all even integers from 0 to N.
Input: N (int)
Output: Sum of even integers (int)
*/

#include <iostream>
#include <string>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

enNumberType CheckNumberType(int number)
{
    if (number % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

int SumEvenNumbersFrom0ToN(int n)
{
    int sum = 0;
    for (int counter = 0; counter <= n; counter++)
    {
        if (CheckNumberType(counter) == enNumberType::Even)
        {
            sum += counter;
        }
    }
    return sum;
}

int main()
{
    cout << "Sum of even numbers: " << SumEvenNumbersFrom0ToN(ReadNumber()) << endl;
    return 0;
}
