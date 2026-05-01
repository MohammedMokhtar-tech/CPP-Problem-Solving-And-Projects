/*
Problem: Seconds to Task Duration
Description: A program that converts a given number of total seconds into a task duration format (Days:Hours:Minutes:Seconds).
Input: Total seconds (positive integer).
Output: Task duration in the format Days:Hours:Minutes:Seconds.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stTaskDuration
{
    int numberOfDays, numberOfHours, numberOfMinutes, numberOfSeconds;
};

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

stTaskDuration ConvertSecondsToTaskDuration(int totalSeconds)
{
    stTaskDuration taskDuration;
    const int secondsPerDay = 24 * 60 * 60;
    const int secondsPerHour = 60 * 60;
    const int secondsPerMinute = 60;

    int remainder = 0;
    taskDuration.numberOfDays = floor(totalSeconds / secondsPerDay);
    remainder = totalSeconds % secondsPerDay;

    taskDuration.numberOfHours = floor(remainder / secondsPerHour);
    remainder = remainder % secondsPerHour;

    taskDuration.numberOfMinutes = floor(remainder / secondsPerMinute);
    remainder = remainder % secondsPerMinute;

    taskDuration.numberOfSeconds = remainder;

    return taskDuration;
}

void PrintTaskDuration(stTaskDuration taskDuration)
{
    cout << "\n";
    cout << taskDuration.numberOfDays << ":"
         << taskDuration.numberOfHours << ":"
         << taskDuration.numberOfMinutes << ":"
         << taskDuration.numberOfSeconds << "\n";
}

int main()
{
    int totalSeconds = ReadPositiveNumber("Please Enter Total Seconds?");
    PrintTaskDuration(ConvertSecondsToTaskDuration(totalSeconds));

    return 0;
}
