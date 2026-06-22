/*
  Problem Name: Circle Area Inscribed in an Isosceles Triangle
  Description: A program to calculate the area of a circle inscribed in an isosceles triangle.
  Input: Side (a) and Base (b) of the triangle.
  Output: The area of the circle.
*/

#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float &side, float &base)
{
    cout << "Please enter triangle side (a): ";
    cin >> side;
    cout << "Please enter triangle base (b): ";
    cin >> base;
}

float CalculateCircleAreaInscribedInIsoscelesTriangle(float side, float base)
{
    const float pi = 3.14;
    float area = pi * (pow(base, 2) / 4) * ((2 * side - base) / (2 * side + base));
    return area;
}

void PrintArea(float area)
{
    cout << "\nThe circle area is: " << area << endl;
}

int main()
{
    float side, base;

    ReadTriangleData(side, base);
    PrintArea(CalculateCircleAreaInscribedInIsoscelesTriangle(side, base));

    return 0;
}
