/*
  Problem Name: Average of 3 Marks (Pass or Fail)
  Description: A program to read three marks, calculate their average, and determine if the student passed or failed (Pass >= 50).
  Input: Three integer marks (mark1, mark2, mark3).
  Output: The average and the result (Pass or Fail).
*/

#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadMarks(int &mark1, int &mark2, int &mark3)
{
    cout << "Please enter mark 1: ";
    cin >> mark1;
    cout << "Please enter mark 2: ";
    cin >> mark2;
    cout << "Please enter mark 3: ";
    cin >> mark3;
}

int CalculateSumOfMarks(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float CalculateAverageOfMarks(int mark1, int mark2, int mark3)
{
    return (float)CalculateSumOfMarks(mark1, mark2, mark3) / 3;
}

enPassFail CheckAverage(float average)
{
    if (average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(float average)
{
    cout << "\nYour total average is: " << average << endl;

    if (CheckAverage(average) == enPassFail::Pass)
        cout << "You Passed" << endl;
    else
        cout << "You Failed" << endl;
}

int main()
{
    int mark1, mark2, mark3;

    ReadMarks(mark1, mark2, mark3);
    PrintResult(CalculateAverageOfMarks(mark1, mark2, mark3));

    return 0;
}
