/**
 * Problem Name: Hire Candidate with Recommendation
 * Description: This program determines if a candidate is hired based on their age, possession of a driver's license, or if they have a recommendation.
 * Input: User enters age (int), driver's license status (bool), and recommendation status (bool).
 * Output: Prints "you are hired" if they have a recommendation OR (age > 21 AND has license), otherwise prints "you are rejected".
 */

#include <iostream>

using namespace std;

struct stCandidateInfo
{
    int age;
    bool hasDriverLicense;
    bool hasRecommendation;
};

stCandidateInfo ReadCandidateInfo()
{
    stCandidateInfo info;
    cout << "enter your age" << endl;
    cin >> info.age;
    cout << "do you have driver license (1 for Yes, 0 for No)" << endl;
    cin >> info.hasDriverLicense;
    cout << "do you have a recommendation (1 for Yes, 0 for No)" << endl;
    cin >> info.hasRecommendation;
    return info;
}

bool IsAccepted(stCandidateInfo info)
{
    if (info.hasRecommendation)
        return true;
    else
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
