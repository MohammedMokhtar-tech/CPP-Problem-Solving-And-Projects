/*
  Problem Name: Rectangle Area through Diagonal and Side
  Description: A program to calculate the area of a rectangle using its diagonal and one side.
  Input: Diagonal (d) and side (a).
  Output: The area of the rectangle.
*/

#include <iostream>
#include <cmath>

using namespace std;

void ReadDiagonalAndSide(float &diagonal, float &side)
{
    cout << "Please enter the diagonal (d): ";
    cin >> diagonal;
    cout << "Please enter the side (a): ";
    cin >> side;
}

float CalculateRectangleAreaByDiagonalAndSide(float diagonal, float side)
{
    // Area = side * sqrt(diagonal^2 - side^2)
    // Note: The original code had A * (sqrt (pow (A ,2)+pow (D ,2))), 
    // but the standard formula for area with diagonal D and side A is A * sqrt(D^2 - A^2).
    // I will stick to the provided logic even if it seems mathematically slightly different 
    // from the usual "find other side then multiply" (which would be sqrt(D^2 - A^2)).
    // Wait, the original code was: Area = A * (sqrt (pow (A ,2)+pow (D ,2)));
    // That looks like it's calculating A * (hypotenuse of A and D).
    // I will keep the logic as provided per Rule 6 "Do NOT change logic".
    
    return side * sqrt(pow(side, 2) + pow(diagonal, 2));
}

void PrintArea(float area)
{
    cout << "\nThe rectangle area is: " << area << endl;
}

int main()
{
    float diagonal, side;

    ReadDiagonalAndSide(diagonal, side);
    PrintArea(CalculateRectangleAreaByDiagonalAndSide(diagonal, side));

    return 0;
}
