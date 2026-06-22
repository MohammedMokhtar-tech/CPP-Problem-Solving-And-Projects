/*
  Problem Name: Triangle Area
  Description: A program to calculate the area of a triangle.
  Input: Base (a) and height (h).
  Output: The area of the triangle.
*/

#include <iostream>

using namespace std;

void ReadBaseAndHeight(float &base, float &height)
{
    cout << "Please enter triangle base (a): ";
    cin >> base;
    cout << "Please enter triangle height (h): ";
    cin >> height;
}

float CalculateTriangleArea(float base, float height)
{
    return (base * height) / 2;
}

void PrintArea(float area)
{
    cout << "\nThe triangle area is: " << area << endl;
}

int main()
{
    float base, height;

    ReadBaseAndHeight(base, height);
    PrintArea(CalculateTriangleArea(base, height));

    return 0;
}
