/*
 * Problem Name: Simple Calculator
 * Description: Performs basic arithmetic operations (addition, subtraction, multiplication, division) based on two numbers and an operator provided by the user.
 * Input: Two numbers (float) and an operator (+, -, *, /).
 * Output: The result of the calculation.
 */

#include <iostream>
#include <string>

using namespace std;

enum enOperator { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string message)
{
    float number;
    cout << message;
    cin >> number;
    return number;
}

enOperator ReadOperator()
{
    char opChar = '+';
    cout << "Enter operation type (+, -, *, /): ";
    cin >> opChar;
    return (enOperator)opChar;
}

float Calculate(float number1, float number2, enOperator opType)
{
    switch (opType)
    {
    case enOperator::Add:
        return number1 + number2;
    case enOperator::Subtract:
        return number1 - number2;
    case enOperator::Multiply:
        return number1 * number2;
    case enOperator::Divide:
        if (number2 != 0)
            return number1 / number2;
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    default:
        return number1 + number2;
    }
}

int main()
{
    float number1 = ReadNumber("Please enter the first number: ");
    float number2 = ReadNumber("Please enter the second number: ");
    enOperator opType = ReadOperator();

    cout << "\nResult = " << Calculate(number1, number2, opType) << endl;

    return 0;
}
