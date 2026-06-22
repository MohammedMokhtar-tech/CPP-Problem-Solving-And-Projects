/*
  Problem Name: Letter Pattern
  Description: This program reads a positive integer N and prints a pattern of letters.
               It starts from 'A' and goes up to the N-th letter.
               The i-th letter (where i is its position from 'A') is printed i times in its row.
  Input: A positive integer N.
  Output: A pattern of letters from 'A' up to the N-th letter.
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

void printLetterPattern(int number) {
    cout << "\n";
    // 65 is the ASCII value for 'A'
    for (int i = 65; i <= 65 + number - 1; i++) {
        for (int j = 1; j <= (i - 65 + 1); j++) {
            cout << char(i);
        }
        cout << "\n";
    }
}

int main() {
    printLetterPattern(readPositiveNumber("Please enter a positive number?"));
    return 0;
}
