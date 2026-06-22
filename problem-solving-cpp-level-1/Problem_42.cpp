/*
 * Problem Name: Task Duration to Total Seconds
 * Description: Calculates the total number of seconds from a given duration in days, hours, minutes, and seconds.
 * Input: Number of days, hours, minutes, and seconds.
 * Output: Total duration in seconds.
 */

#include <iostream>
#include <string>

using namespace std;

struct stTaskDuration
{
    int days, hours, minutes, seconds;
};

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << ": ";
        cin >> number;
    } while (number < 0);

    return number;
}

stTaskDuration ReadTaskDuration()
{
    stTaskDuration taskDuration;

    taskDuration.days = ReadPositiveNumber("Please enter number of days");
    taskDuration.hours = ReadPositiveNumber("Please enter number of hours");
    taskDuration.minutes = ReadPositiveNumber("Please enter number of minutes");
    taskDuration.seconds = ReadPositiveNumber("Please enter number of seconds");

    return taskDuration;
}

int CalculateTotalSeconds(stTaskDuration taskDuration)
{
    int totalSeconds = 0;

    totalSeconds = taskDuration.days * 24 * 60 * 60;
    totalSeconds += taskDuration.hours * 60 * 60;
    totalSeconds += taskDuration.minutes * 60;
    totalSeconds += taskDuration.seconds;

    return totalSeconds;
}

int main()
{
    int totalSeconds = CalculateTotalSeconds(ReadTaskDuration());

    cout << "\nTask Duration In Seconds: " << totalSeconds << endl;

    return 0;
}
