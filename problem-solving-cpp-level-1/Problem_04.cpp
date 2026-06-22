/**
 * Problem Name: Hire Candidate
 * Description: This program determines if a candidate is hired based on their age and possession of a driver's license.
 * Input: User enters age (int) and whether they have a driver's license (bool).
 * Output: Prints "you are hired" if age > 21 and has license, otherwise prints "you are rejected".
 */

#include <iostream>

using namespace std;

struct stCandidateInfo
{
    int age;
    bool hasDriverLicense;
};

stCandidateInfo ReadCandidateInfo()
{
    stCandidateInfo info;
    cout << "enter your age" << endl;
    cin >> info.age;
    cout << "do you have driver license (1 for Yes, 0 for No)" << endl;
    cin >> info.hasDriverLicense;
    return info;
}

bool IsAccepted(stCandidateInfo info)
{
    return (info.age > 21 && info.hasDriverLicense);
}

void PrintResult(stCandidateInfo info)
{
    if (IsAccepted(info))
        cout << "you are hired\n";
    else
        cout << "you are rejected\n";
}

int main()
{
    PrintResult(ReadCandidateInfo());
    return 0;
}
