/*
  Problem Name: Palindrome Number
  Description: This program reads a positive number from the user and checks whether it is a palindrome.
               A palindrome number remains the same when its digits are reversed.
  Input: A positive integer.
  Output: A message indicating if the number is a palindrome or not.
*/

#include <iostream>
#include <string>

using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

int reverseNumber(int number) {
    int remainder = 0;
    int reversedNumber = 0;
    while (number > 0) {
        remainder = number % 10;
        number = number / 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }
    return reversedNumber;
}

void checkIfPalindrome(int number) {
    if (number == reverseNumber(number)) {
        cout << "Your number is a palindrome\n";
    } else {
        cout << "Your number is not a palindrome\n";
    }
}

int main() {
    checkIfPalindrome(readPositiveNumber("Enter your number: "));
    return 0;
}
