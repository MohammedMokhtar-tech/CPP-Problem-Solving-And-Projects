/*
Problem: Letters A to Z
Description: A program that prints all uppercase letters from A to Z.
Input: None.
Output: Letters from A to Z each on a new line.
*/

#include <iostream>

using namespace std;

void PrintLettersAtoZ()
{
    for (int i = 65; i <= 90; i++)
    {
        cout << (char)i << endl;
    }
}

int main()
{
    PrintLettersAtoZ();

    return 0;
}
