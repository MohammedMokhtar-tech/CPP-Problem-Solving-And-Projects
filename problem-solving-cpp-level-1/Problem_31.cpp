/*
Problem Name: Powers of 2, 3, and 4
Description: This program reads a number from the user and calculates its square, cube, and fourth power.
Input: Number (int)
Output: Square, cube, and fourth power (int)
*/

#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    return number;
}

void PrintPowers(int number)
{
    int power2, power3, power4;
    power2 = number * number;
    power3 = number * number * number;
    power4 = number * number * number * number;

    cout << "Square: " << power2 << endl;
    cout << "Cube: " << power3 << endl;
    cout << "Fourth Power: " << power4 << endl;
}

int main()
{
    PrintPowers(ReadNumber());
    return 0;
}
