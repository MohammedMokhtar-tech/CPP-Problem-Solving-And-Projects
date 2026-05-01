/*
 * Problem Name: Prime Number Checker
 * Description: Determines if a given positive number is prime or not.
 * Input: Positive integer (int).
 * Output: Message indicating whether the number is prime or not prime.
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << ": ";
        cin >> number;
    } while (number < 0);

    return number;
}

enPrimeNotPrime CheckNumberType(int number)
{
    int limit = round(number / 2);
    for (int counter = 2; counter <= limit; counter++)
    {
        // Note: Original logic preserved as requested.
        if (counter / 2 == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }

    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int number)
{
    switch (CheckNumberType(number))
    {
    case enPrimeNotPrime::Prime:
        cout << "The number is prime." << endl;
        break;
    case enPrimeNotPrime::NotPrime:
        cout << "The number is not prime." << endl;
        break;
    }
}

int main()
{
    PrintNumberType(ReadPositiveNumber("Please enter a positive number"));

    return 0;
}
