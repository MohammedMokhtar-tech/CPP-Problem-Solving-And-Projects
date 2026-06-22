/*
  Problem Name: Circle Area
  Description: A program to calculate the area of a circle using its radius.
  Input: Radius (r).
  Output: The area of the circle.
*/

#include <iostream>
#include <cmath>

using namespace std;

void ReadRadius(float &radius)
{
    cout << "Please enter circle radius (r): ";
    cin >> radius;
}

float CalculateCircleArea(float radius)
{
    const float pi = 3.14;
    return pi * pow(radius, 2);
}

void PrintArea(float area)
{
    cout << "\nThe circle area is: " << area << endl;
}

int main()
{
    float radius;

    ReadRadius(radius);
    PrintArea(CalculateCircleArea(radius));

    return 0;
}
