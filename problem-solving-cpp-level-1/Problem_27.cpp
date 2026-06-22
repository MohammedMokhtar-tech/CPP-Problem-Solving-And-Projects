/*
Problem Name: Print Numbers Down from N-1 to 0
Description: This program reads a number N from the user and prints all integers starting from N-1 down to 0.
Input: N (int)
Output: Sequence of integers from N-1 down to 0 (string)
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

void PrintNumbersDownFromN(int n)
{
    int counter = n;
    while (counter >= 1)
    {
        counter--;
        cout << counter << endl;
    }
}

int main()
{
    PrintNumbersDownFromN(ReadNumber());
    return 0;
}
