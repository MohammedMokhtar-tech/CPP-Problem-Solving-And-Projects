/*
  Problem Name: Inverted Number Pattern
  Description: This program reads a positive integer N and prints an inverted pattern of numbers.
               It starts from N and goes down to 1, printing each number i, i times in each row.
  Input: A positive integer N.
  Output: An inverted pattern of numbers from N to 1.
*/

#include <iostream>
#include <string>

using namespace std;

int readPositiveNumber(string message) {
    int number;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

void printInvertedNumberPattern(int number) {
    for (int i = number; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << "\n";
    }
}

int main() {
    printInvertedNumberPattern(readPositiveNumber("Enter your number: "));
    return 0;
}
