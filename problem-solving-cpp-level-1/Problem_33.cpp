/*
 * Problem Name: Grade Classifier
 * Description: Reads a numeric grade from the user within a specific range and converts it to its corresponding letter grade.
 * Input: Numeric grade between 0 and 100.
 * Output: Letter grade (A, B, C, D, E, or F).
 */

#include <iostream>
#include <string>

using namespace std;

int ReadNumberInRange(int from, int to)
{
    int grade;
    do
    {
        cout << "Please enter your grade between " << from << " and " << to << ": ";
        cin >> grade;
    } while (grade < from || grade > to);

    return grade;
}

char GetGradeLetter(int grade)
{
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else if (grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    cout << "Your grade is: " << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;

    return 0;
}
