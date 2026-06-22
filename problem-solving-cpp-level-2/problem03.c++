/*
Problem Name: Perfect Number Check
Description: This program checks if a given positive integer is a perfect number.
             A perfect number is equal to the sum of its divisors (excluding itself).
Input: A positive integer.
Output: Whether the number is perfect or not.
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
        cout << message << ": ";
        cin >> number;
    } while (number < 0);
    return number;
}

bool IsPerfectNumber(int number)
{
    int sum = 0;
    for (int counter = 1; counter < number; counter++)
    {
        if (number % counter == 0)
        {
            sum += counter;
        }
    }
    return (number == sum);
}

void PrintResult(int number)
{
    if (IsPerfectNumber(number))
    {
        cout << number << " is a Perfect Number." << endl;
    }
    else
    {
        cout << number << " is NOT a Perfect Number." << endl;
    }
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a positive number"));
    return 0;
}
