/**
 * Problem Name: Pass or Fail
 * Description: This program reads a mark from the user and determines if it's a pass or fail grade.
 * Input: User enters an integer mark.
 * Output: Prints "you are pass" if mark >= 50, otherwise prints "you are fail".
 */

#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark()
{
    int mark;
    cout << "enter your mark" << endl;
    cin >> mark;
    return mark;
}

enPassFail CheckMark(int mark)
{
    if (mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(enPassFail result)
{
    if (result == enPassFail::Pass)
        cout << "you are pass" << endl;
    else
        cout << "you are fail" << endl;
}

int main()
{
    PrintResult(CheckMark(ReadMark()));
    return 0;
}
