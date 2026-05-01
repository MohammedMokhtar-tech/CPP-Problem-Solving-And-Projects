/*
  Problem Name: Random Character Generator
  Description: This program generates random characters of various types:
               lowercase letters, uppercase letters, special characters, and digits.
  Input: An enum representing the desired character type.
  Output: A random character corresponding to the requested type.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enCharType {
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};

int getRandomNumber(int from, int to) {
    int randomNum = rand() % (to - from + 1) + from;
    return randomNum;
}

char getRandomCharacter(enCharType charType) {
    switch (charType) {
        case enCharType::SmallLetter:
            return char(getRandomNumber('a', 'z'));
        case enCharType::CapitalLetter:
            return char(getRandomNumber('A', 'Z'));
        case enCharType::SpecialCharacter:
            return char(getRandomNumber('!', '/')); // ASCII 33 to 47
        case enCharType::Digit:
            return char(getRandomNumber('0', '9'));
        default:
            return '\0';
    }
}

int main() {
    // Seeds the random number generator
    srand((unsigned)time(NULL));

    cout << "Random Small Letter: " << getRandomCharacter(enCharType::SmallLetter) << endl;
    cout << "Random Capital Letter: " << getRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << "Random Special Character: " << getRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << "Random Digit: " << getRandomCharacter(enCharType::Digit) << endl;

    return 0;
}
