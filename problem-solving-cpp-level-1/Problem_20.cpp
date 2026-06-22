/*
  Problem Name: Circle Area Inscribed in a Square
  Description: A program to calculate the area of a circle inscribed in a square.
  Input: Square side (A).
  Output: The area of the circle.
*/

#include <iostream>
#include <cmath>

using namespace std;

void ReadSquareSide(float &squareSide)
{
    cout << "Please enter square side (A): ";
    cin >> squareSide;
}

float CalculateCircleAreaInscribedInSquare(float squareSide)
{
    const float pi = 3.14;
    return (pi * pow(squareSide, 2)) / 4;
}

void PrintArea(float area)
{
    cout << "\nThe circle area is: " << area << endl;
}

int main()
{
    float squareSide;

    ReadSquareSide(squareSide);
    PrintArea(CalculateCircleAreaInscribedInSquare(squareSide));

    return 0;
}
