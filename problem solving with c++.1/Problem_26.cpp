/*
Problem Name: Print Numbers from 1 to N
Description: This program reads a number N from the user and prints all integers from 1 up to N.
Input: N (int)
Output: Sequence of integers from 1 to N (string)
*/

#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

void PrintNumbersFrom1ToN(int number)
{
    for (int counter = 1; counter <= number; counter++)
    {
        cout << counter << endl;
    }
}

int main()
{
    PrintNumbersFrom1ToN(ReadNumber());
    return 0;
}
