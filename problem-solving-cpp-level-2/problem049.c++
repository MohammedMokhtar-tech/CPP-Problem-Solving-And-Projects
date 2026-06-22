/*
 * Problem: Custom Ceiling Implementation
 * Description: Implements a function to calculate the ceiling of a given number, similar to std::ceil.
 * Input: A single float number.
 * Output: The integer ceiling value of the number, compared against std::ceil.
 */

#include <iostream>
#include <cmath>

using namespace std;

float GetFractionalPart(float number)
{
    return number - static_cast<int>(number);
}

int CalculateCeiling(float number)
{
    if (abs(GetFractionalPart(number)) > 0)
    {
        if (number > 0)
            return static_cast<int>(number) + 1;
        else
            return static_cast<int>(number);
    }
    else
    {
        return static_cast<int>(number);
    }
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
    cout << "Custom Ceiling Result : " << CalculateCeiling(number) << endl;
    cout << "C++ ceil Result       : " << ceil(number) << endl;
    return 0;
}
