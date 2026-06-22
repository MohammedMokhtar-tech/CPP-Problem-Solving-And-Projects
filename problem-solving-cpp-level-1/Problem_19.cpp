/*
  Problem Name: Circle Area through Diameter
  Description: A program to calculate the area of a circle using its diameter.
  Input: Diameter (D).
  Output: The area of the circle.
*/

#include <iostream>
#include <cmath>

using namespace std;

void ReadDiameter(float &diameter)
{
    cout << "Please enter circle diameter (D): ";
    cin >> diameter;
}

float CalculateCircleAreaByDiameter(float diameter)
{
    const float pi = 3.14;
    return (pi * pow(diameter, 2)) / 4;
}

void PrintArea(float area)
{
    cout << "\nThe circle area is: " << area << endl;
}

int main()
{
    float diameter;

    ReadDiameter(diameter);
    PrintArea(CalculateCircleAreaByDiameter(diameter));

    return 0;
}
