/*
Problem Name: Age Validation in Range
Description: This program reads an age from the user and validates if it falls within the range of 18 to 45 (inclusive).
Input: Age (int)
Output: Validation message (string)
*/

#include <iostream>
#include <string>

using namespace std;

int ReadAge()
{
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    return age;
}

bool IsNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

void PrintResult(int age)
{
    if (IsNumberInRange(age, 18, 45))
    {
        cout << age << " is a valid age." << endl;
    }
    else
    {
        cout << age << " is an invalid age." << endl;
    }
}

int main()
{
    PrintResult(ReadAge());
    return 0;
}
