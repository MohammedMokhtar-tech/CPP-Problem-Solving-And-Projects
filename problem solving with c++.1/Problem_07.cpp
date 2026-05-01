/**
 * Problem Name: Half of Number
 * Description: This program reads a number from the user and calculates its half.
 * Input: User enters an integer.
 * Output: Prints the half of the entered number.
 */

#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int number;
    cout << "enter your number" << endl;
    cin >> number;
    return number;
}

float CalculateHalf(int number)
{
    return (float)number / 2;
}

void PrintResult(int number)
{
    string result = "half of number " + to_string(number) + " is " + to_string(CalculateHalf(number));
    cout << result << endl;
}

int main()
{
    PrintResult(ReadNumber());
    return 0;
}
