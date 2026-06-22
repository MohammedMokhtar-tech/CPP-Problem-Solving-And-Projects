/*
Problem Name: Factorial of a Number
Description: This program reads a positive integer N from the user and calculates its factorial (N!).
Input: N (int)
Output: Factorial of N (int)
*/

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < 0);
    return number;
}

int CalculateFactorial(int n)
{
    int factorial = 1;
    for (int counter = 1; counter <= n; counter++)
    {
        factorial = factorial * counter;
    }
    return factorial;
}

int main()
{
    cout << "Factorial: " << CalculateFactorial(ReadPositiveNumber("Please enter a positive number:")) << endl;
    return 0;
}
