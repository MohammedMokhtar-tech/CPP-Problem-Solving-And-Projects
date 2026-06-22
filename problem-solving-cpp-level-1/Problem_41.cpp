/*
 * Problem Name: Hours to Days and Weeks Converter
 * Description: Converts a total number of hours into days and weeks.
 * Input: Number of hours (float).
 * Output: Total hours, equivalent days, and equivalent weeks.
 */

#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string message)
{
    float number;
    do
    {
        cout << message << ": ";
        cin >> number;
    } while (number < 0);

    return number;
}

float HoursToDays(float hours)
{
    return hours / 24.0f;
}

float HoursToWeeks(float hours)
{
    return hours / (24.0f * 7.0f);
}

float DaysToWeeks(float days)
{
    return days / 7.0f;
}

int main()
{
    float numberOfHours = ReadPositiveNumber("Please enter the number of hours");
    float numberOfDays = HoursToDays(numberOfHours);
    float numberOfWeeks = DaysToWeeks(numberOfDays);

    cout << "\nTotal Hours = " << numberOfHours << endl;
    cout << "Total Days = " << numberOfDays << endl;
    cout << "Total Weeks = " << numberOfWeeks << endl;

    return 0;
}
