/*
  Problem Name: Circle Area through Circumference
  Description: A program to calculate the area of a circle using its circumference.
  Input: Circumference (L).
  Output: The area of the circle.
*/

#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumference()
{
    float circumference;
    cout << "Please enter circle circumference (L): ";
    cin >> circumference;
    return circumference;
}

float CalculateCircleAreaByCircumference(float circumference)
{
    const float pi = 3.14;
    return pow(circumference, 2) / (4 * pi);
}

void PrintArea(float area)
{
    cout << "\nThe circle area is: " << area << endl;
}

int main()
{
    PrintArea(CalculateCircleAreaByCircumference(ReadCircumference()));

    return 0;
}
