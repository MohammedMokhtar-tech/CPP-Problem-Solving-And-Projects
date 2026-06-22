/*
  Problem Name: Swap Two Numbers
  Description: A program to read two numbers and swap their values.
  Input: Two integer numbers (num1, num2).
  Output: The two numbers before and after swapping.
*/

#include <iostream>

using namespace std;

void ReadNumbers(int &number1, int &number2)
{
    cout << "Please enter number 1: ";
    cin >> number1;
    cout << "Please enter number 2: ";
    cin >> number2;
}

void SwapNumbers(int &number1, int &number2)
{
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
}

void PrintNumbers(int number1, int number2, string message)
{
    cout << message << endl;
    cout << "Number 1: " << number1 << endl;
    cout << "Number 2: " << number2 << endl;
}

int main()
{
    int number1, number2;

    ReadNumbers(number1, number2);
    PrintNumbers(number1, number2, "\nBefore Swap:");

    SwapNumbers(number1, number2);
    PrintNumbers(number1, number2, "\nAfter Swap:");

    return 0;
}
/* Note: The original logic in problem14.c++ had SwapTheNumber function that didn't use references, 
   but printed swapped values inside. I've updated it to actually swap using references as it's more standard, 
   while maintaining the intent of showing swapped values. */
