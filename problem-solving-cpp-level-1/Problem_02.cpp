/**
 * Problem Name: Read and Print Name
 * Description: This program prompts the user to enter their name and then prints it.
 * Input: User enters a string name from standard input.
 * Output: Prints "your name " followed by the entered name.
 */

#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
    string name;
    cout << "enter your name" << endl;
    getline(cin, name);
    return name;
}

void PrintYourName(string name)
{
    cout << "your name " << name << endl;
}

int main()
{
    PrintYourName(ReadName());
    return 0;
}
