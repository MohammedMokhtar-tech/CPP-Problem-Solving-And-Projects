/*
 * Problem: Custom Floor Implementation
 * Description: Implements a function to calculate the floor of a given number, similar to std::floor.
 * Input: A single float number.
 * Output: The integer floor value of the number, compared against std::floor.
 */

#include <iostream>
#include <cmath>

using namespace std;

int CalculateFloor(float number)
{
    if (number > 0)
        return static_cast<int>(number);
    else
        return static_cast<int>(number) - 1;
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
    cout << "Custom Floor Result : " << CalculateFloor(number) << endl;
    cout << "C++ floor Result    : " << floor(number) << endl;
    return 0;
}
