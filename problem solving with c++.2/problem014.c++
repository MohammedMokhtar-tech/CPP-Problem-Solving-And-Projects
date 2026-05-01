/*
  Problem Name: Inverted Letter Pattern
  Description: This program reads a positive integer N and prints an inverted pattern of letters.
               It starts from the N-th letter (where A is 1) and goes down to A.
               The i-th letter (where i is its position from A) is printed i times.
  Input: A positive integer N.
  Output: An inverted pattern of letters from the N-th letter down to A.
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

void printInvertedLetterPattern(int number) {
    cout << "\n";
    // 65 is the ASCII value for 'A'
    for (int i = 65 + number - 1; i >= 65; i--) {
        for (int j = 1; j <= (i - 65 + 1); j++) {
            cout << char(i);
        }
        cout << "\n";
    }
}

int main() {
    printInvertedLetterPattern(readPositiveNumber("Please enter a positive number?"));
    return 0;
}
