/*
  Problem Name: Number Pattern
  Description: This program reads a positive integer N and prints a pattern of numbers.
               It starts from 1 and goes up to N, printing each number i, i times in each row.
  Input: A positive integer N.
  Output: A pattern of numbers from 1 to N.
*/

#include <iostream>
#include <string>

using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

void printNumberPattern(int number) {
    cout << "\n";
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << "\n";
    }
}

int main() {
    printNumberPattern(readPositiveNumber("Please enter a positive number?"));

    return 0;
}
