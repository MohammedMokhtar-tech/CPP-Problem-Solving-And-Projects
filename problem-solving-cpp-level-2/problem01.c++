/*
Problem Name: Multiplication Table
Description: This program prints a formatted multiplication table from 1 to 10.
Input: None
Output: A 10x10 multiplication table with headers.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void PrintTableHeaders()
{
    cout << "\n\n\t\t\t Multiplication Table\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n------------------------------------------------------------------------------------\n";
}

string GetColumnSeparator(int index)
{
    if (index < 10)
        return "  |";
    else
        return " |";
}

void PrintMultiplicationTable()
{
    PrintTableHeaders();

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << GetColumnSeparator(i) << "\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();
    return 0;
}
