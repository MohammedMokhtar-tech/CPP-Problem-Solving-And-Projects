/*
Problem Name: Perfect Numbers from 1 to N
Description: This program finds and prints all perfect numbers in the range [1, N].
Input: A positive integer N.
Output: All perfect numbers between 1 and N.
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

void PrintPerfectNumbersInRange(int limit)
{
    cout << "The Perfect Numbers From 1 To " << limit << ":" << endl;
    for (int i = 1; i <= limit; i++)
    {
        if (IsPerfectNumber(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintPerfectNumbersInRange(ReadPositiveNumber("Enter a positive number"));
    return 0;
}
