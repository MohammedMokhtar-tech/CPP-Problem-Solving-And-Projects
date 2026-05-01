/*
 * Problem Name: Sum Until Terminated
 * Description: Repeatedly reads numbers from the user and calculates their sum until the sentinel value -99 is entered.
 * Input: A sequence of numbers (float).
 * Output: The total sum of all entered numbers excluding the termination value.
 */

#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string message)
{
    float number;
    cout << message << ": ";
    cin >> number;
    return number;
}

float CalculateSum()
{
    float sum = 0;
    float number = 0;
    int counter = 1;

    while (true)
    {
        number = ReadNumber("Please enter Number " + to_string(counter));

        if (number == -99)
            break;

        sum += number;
        counter++;
    }

    return sum;
}

int main()
{
    float totalSum = CalculateSum();

    cout << "\nTotal Sum = " << totalSum << endl;

    return 0;
}
