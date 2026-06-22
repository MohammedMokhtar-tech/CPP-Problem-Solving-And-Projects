/*
Problem: Day of Week
Description: A program that reads a number from 1 to 7 and prints the corresponding day of the week.
Input: Day number (1 to 7).
Output: The name of the day (e.g., Saturday, Sunday).
*/

#include <iostream>
#include <string>

using namespace std;

enum enDayOfWeek
{
    Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7
};

int ReadNumberInRange(string message, int from, int to)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < from || number > to);

    return number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Please enter day number (Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7)?", 1, 7);
}

string GetDayOfWeek(enDayOfWeek day)
{
    switch (day)
    {
    case enDayOfWeek::Sat:
        return "Saturday";
    case enDayOfWeek::Sun:
        return "Sunday";
    case enDayOfWeek::Mon:
        return "Monday";
    case enDayOfWeek::Tue:
        return "Tuesday";
    case enDayOfWeek::Wed:
        return "Wednesday";
    case enDayOfWeek::Thu:
        return "Thursday";
    case enDayOfWeek::Fri:
        return "Friday";
    default:
        return "Not a valid Day";
    }
}

int main()
{
    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

    return 0;
}
