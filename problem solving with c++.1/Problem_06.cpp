/**
 * Problem Name: Full Name
 * Description: This program reads the first and last name of a person and concatenates them to form the full name.
 * Input: User enters first name (string) and last name (string).
 * Output: Prints the full name.
 */

#include <iostream>
#include <string>

using namespace std;

struct stNameInfo
{
    string firstName;
    string lastName;
};

stNameInfo ReadName()
{
    stNameInfo info;
    cout << "enter your first name" << endl;
    cin >> info.firstName;
    cout << "enter your last name" << endl;
    cin >> info.lastName;
    return info;
}

string GetFullName(stNameInfo info)
{
    return info.firstName + " " + info.lastName;
}

void PrintFullName(string fullName)
{
    cout << "your full name " << fullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadName()));
    return 0;
}
