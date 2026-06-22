/*
 * Problem: Custom Square Root Implementation
 * Description: Implements a function to calculate the square root of a given number using pow.
 * Input: A single float number.
 * Output: The square root of the number, compared against std::sqrt.
 */

#include <iostream>
#include <cmath>

using namespace std;

float CalculateSquareRoot(float number)
{
    return pow(number, 0.5);
}

float ReadNumber()
{
    float number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

int main()
{
    float number = ReadNumber();
    cout << "Custom Square Root Result : " << CalculateSquareRoot(number) << endl;
    cout << "C++ sqrt Result           : " << sqrt(number) << endl;
    return 0;
}
