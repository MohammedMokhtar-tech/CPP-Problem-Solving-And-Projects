/*
Problem Name: Prime Numbers from 1 to N
Description: This program reads a positive integer N and prints all prime numbers from 1 up to N.
Input: A positive integer N.
Output: All prime numbers between 1 and N.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeStatus { Prime = 1, NotPrime = 2 };

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

enPrimeStatus CheckPrime(int number)
{
    if (number <= 1) return enPrimeStatus::NotPrime;

    int limit = round(number / 2);
    for (int counter = 2; counter <= limit; counter++)
    {
        if (number % counter == 0)
        {
            return enPrimeStatus::NotPrime;
        }
    }
    return enPrimeStatus::Prime;
}

void PrintPrimesInRange(int limit)
{
    cout << "The Prime Numbers From 1 To " << limit << ":" << endl;
    for (int i = 1; i <= limit; i++)
    {
        if (CheckPrime(i) == enPrimeStatus::Prime)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintPrimesInRange(ReadPositiveNumber("Enter a positive number: "));
    return 0;
}
