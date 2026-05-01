/*
  Problem Name: Maximum of 2 Numbers
  Description: A program to read two numbers and determine which one is greater.
  Input: Two integer numbers (num1, num2).
  Output: The greater of the two numbers.
*/

#include <iostream>

using namespace std;

enum enComparison { Greater = 1, Less = 2 };

void ReadNumbers(int &number1, int &number2)
{
    cout << "Please enter number 1: ";
    cin >> number1;
    cout << "Please enter number 2: ";
    cin >> number2;
}

enComparison CheckGreaterNumber(int number1, int number2)
{
    if (number1 > number2)
        return enComparison::Greater;
    else
        return enComparison::Less;
}

void PrintGreaterNumber(int number1, int number2)
{
    if (CheckGreaterNumber(number1, number2) == enComparison::Greater)
        cout << "\nThe number 1 is greater than number 2" << endl;
    else
        cout << "\nThe number 2 is greater than number 1" << endl;
}

int main()
{
    int number1, number2;

    ReadNumbers(number1, number2);
    PrintGreaterNumber(number1, number2);

    return 0;
}
