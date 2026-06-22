/*
  Problem Name: Rectangle Area
  Description: A program to calculate the area of a rectangle.
  Input: Width and Height of the rectangle.
  Output: The area of the rectangle.
*/

#include <iostream>

using namespace std;

void ReadDimensions(float &width, float &height)
{
    cout << "Please enter rectangle width: ";
    cin >> width;
    cout << "Please enter rectangle height: ";
    cin >> height;
}

float CalculateRectangleArea(float width, float height)
{
    return width * height;
}

void PrintArea(float area)
{
    cout << "\nThe rectangle area is: " << area << endl;
}

int main()
{
    float width, height;

    ReadDimensions(width, height);
    PrintArea(CalculateRectangleArea(width, height));

    return 0;
}
