/*
  Problem Name: Circle Area Circumscribed about an Arbitrary Triangle
  Description: A program to calculate the area of a circle circumscribed about an arbitrary triangle.
  Input: Triangle sides (a, b, c).
  Output: The area of the circle.
*/

#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleSides(float &sideA, float &sideB, float &sideC)
{
    cout << "Please enter triangle side (a): ";
    cin >> sideA;
    cout << "Please enter triangle side (b): ";
    cin >> sideB;
    cout << "Please enter triangle side (c): ";
    cin >> sideC;
}

float CalculateCircleAreaCircumscribedAboutTriangle(float sideA, float sideB, float sideC)
{
    const float pi = 3.14;
    float semiPerimeter = (sideA + sideB + sideC) / 2;
    
    // Formula for radius R of circumcircle: R = (a*b*c) / (4 * Area_of_Triangle)
    // Area_of_Triangle (Heron's formula) = sqrt(P * (P-a) * (P-b) * (P-c))
    float triangleArea = sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));
    float circumRadius = (sideA * sideB * sideC) / (4 * triangleArea);
    
    return pi * pow(circumRadius, 2);
}

void PrintArea(float area)
{
    cout << "\nThe circle area is: " << area << endl;
}

int main()
{
    float sideA, sideB, sideC;

    ReadTriangleSides(sideA, sideB, sideC);
    PrintArea(CalculateCircleAreaCircumscribedAboutTriangle(sideA, sideB, sideC));

    return 0;
}
