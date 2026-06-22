/*
Problem Name: Read Age Until Valid Range
Description: This program prompts the user to enter an age between 18 and 45 and continues to re-prompt until a valid age is provided.
Input: Age (int)
Output: Valid age (int)
*/

#include <iostream>
#include <string>

using namespace std;

int ReadAge()
{
    int age;
    cout << "Please enter an age between 18 and 45: ";
    cin >> age;
    return age;
}

bool IsNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

int ReadUntilAgeInRange(int from, int to)
{
    int age = 0;
    do
    {
        age = ReadAge();
    } while (!IsNumberInRange(age, from, to));

    return age;
}

void PrintResult(int age)
{
    cout << "Your age is: " << age << endl;
}

int main()
{
    PrintResult(ReadUntilAgeInRange(18, 45));
    return 0;
}
