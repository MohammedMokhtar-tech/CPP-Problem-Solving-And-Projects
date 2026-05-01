/*
 * Problem Name: Custom Absolute Function
 * Description: Implement a function to calculate the absolute value of a number without using cmath's abs.
 * Input: A floating point number.
 * Output: Print the custom calculated absolute value and the result from the standard abs function.
 */

#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber() {
    float number;
    cout << "\nPlease enter your number: ";
    cin >> number;
    return number;
}

float CalculateAbsoluteValue(float number) {
    if (number < 0) {
        return number * -1;
    }
    return number;
}

int main() {
    float number = ReadNumber();
    cout << "My absolute value result: " << CalculateAbsoluteValue(number) << endl;
    cout << "C++ absolute value result: " << abs(number) << endl;
    return 0;
}
