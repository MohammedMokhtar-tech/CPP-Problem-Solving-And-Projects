/*
  Problem Name: Average of 3 Numbers
  Description: A program to read three numbers and calculate their average.
  Input: Three integer numbers (num1, num2, num3).
  Output: The average of the three numbers.
*/

#include <iostream>

using namespace std;

void ReadNumbers(int &number1, int &number2, int &number3)
{
    cout << "Please enter number 1: ";
    cin >> number1;
    cout << "Please enter number 2: ";
    cin >> number2;
    cout << "Please enter number 3: ";
    cin >> number3;
}

int CalculateSumOfThreeNumbers(int number1, int number2, int number3)
{
    return number1 + number2 + number3;
}

float CalculateAverageOfThreeNumbers(int number1, int number2, int number3)
{
    return (float)CalculateSumOfThreeNumbers(number1, number2, number3) / 3;
}

void PrintAverage(float average)
{
    cout << "\nYour total average is: " << average << endl;
}

int main()
{
    int number1, number2, number3;

    ReadNumbers(number1, number2, number3);
    PrintAverage(CalculateAverageOfThreeNumbers(number1, number2, number3));

    return 0;
}
