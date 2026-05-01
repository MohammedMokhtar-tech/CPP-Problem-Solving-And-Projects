/*
Problem Name: Sum Odd Numbers from 1 to N
Description: This program reads a number N from the user and calculates the sum of all odd integers from 1 to N.
Input: N (int)
Output: Sum of odd integers (int)
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
    if (number % 2 != 0)
        return enNumberType::Odd;
    else
        return enNumberType::Even;
}

int SumOddNumbersFrom1ToN(int n)
{
    int counter = 0;
    int sum = 0;
    do
    {
        counter++;
        if (CheckNumberType(counter) == enNumberType::Odd)
        {
            sum += counter;
        }
    } while (counter < n);

    return sum;
}

int main()
{
    cout << "Sum of odd numbers: " << SumOddNumbersFrom1ToN(ReadNumber()) << endl;
    return 0;
}
