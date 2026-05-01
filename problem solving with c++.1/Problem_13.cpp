/*
  Problem Name: Maximum of 3 Numbers
  Description: A program to read three numbers and determine which one is the largest.
  Input: Three integer numbers (num1, num2, num3).
  Output: The largest of the three numbers.
*/

#include <iostream>

using namespace std;

enum enLargest { Number1 = 1, Number2 = 2, Number3 = 3 };

void ReadNumbers(int &number1, int &number2, int &number3)
{
    cout << "Please enter number 1: ";
    cin >> number1;
    cout << "Please enter number 2: ";
    cin >> number2;
    cout << "Please enter number 3: ";
    cin >> number3;
}

enLargest CheckLargestNumber(int number1, int number2, int number3)
{
    if (number1 > number2 && number1 > number3)
        return enLargest::Number1;
    else if (number2 > number1 && number2 > number3)
        return enLargest::Number2;
    else
        return enLargest::Number3;
}

void PrintLargestNumber(int number1, int number2, int number3)
{
    enLargest largest = CheckLargestNumber(number1, number2, number3);

    if (largest == enLargest::Number1)
        cout << "\nThe number 1 is the largest number" << endl;
    else if (largest == enLargest::Number2)
        cout << "\nThe number 2 is the largest number" << endl;
    else
        cout << "\nThe number 3 is the largest number" << endl;
}

int main()
{
    int number1, number2, number3;

    ReadNumbers(number1, number2, number3);
    PrintLargestNumber(number1, number2, number3);

    return 0;
}
