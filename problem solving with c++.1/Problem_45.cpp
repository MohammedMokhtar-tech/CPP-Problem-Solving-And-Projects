/*
Problem: Month of Year
Description: A program that reads a number from 1 to 12 and prints the corresponding month of the year.
Input: Month number (1 to 12).
Output: The name of the month (e.g., January, February).
*/

#include <iostream>
#include <string>

using namespace std;

enum enMonthOfYear
{
    Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5,
    Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10,
    Nov = 11, Dec = 12
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

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear)ReadNumberInRange("Please enter a month [1 to 12]:", 1, 12);
}

string GetMonthOfYear(enMonthOfYear month)
{
    switch (month)
    {
    case enMonthOfYear::Jan:
        return "January";
    case enMonthOfYear::Feb:
        return "February";
    case enMonthOfYear::Mar:
        return "March";
    case enMonthOfYear::Apr:
        return "April";
    case enMonthOfYear::May:
        return "May";
    case enMonthOfYear::Jun:
        return "June";
    case enMonthOfYear::Jul:
        return "July";
    case enMonthOfYear::Aug:
        return "August";
    case enMonthOfYear::Sep:
        return "September";
    case enMonthOfYear::Oct:
        return "October";
    case enMonthOfYear::Nov:
        return "November";
    case enMonthOfYear::Dec:
        return "December";
    default:
        return "Not a valid Month";
    }
}

int main()
{
    cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

    return 0;
}
