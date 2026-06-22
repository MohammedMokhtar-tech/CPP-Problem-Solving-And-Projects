/*
 * Problem: Generate Random Keys
 * Description: Generates a specified number of random 16-character keys formatted as 4-4-4-4 of uppercase letters.
 * Input: An integer indicating the number of keys to generate.
 * Output: The generated keys printed to the console.
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int GetRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

char GetRandomCharacter(enCharType charType) {
    switch (charType) {
        case enCharType::SmallLetter:
            return static_cast<char>(GetRandomNumber(97, 122));
        case enCharType::CapitalLetter:
            return static_cast<char>(GetRandomNumber(65, 90));
        case enCharType::SpecialCharacter:
            return static_cast<char>(GetRandomNumber(33, 47));
        case enCharType::Digit:
            return static_cast<char>(GetRandomNumber(48, 57));
        default:
            return '\0';
    }
}

int ReadPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

string GenerateWord(enCharType charType, short length) {
    string word = "";
    for (int i = 0; i < length; i++) {
        word += GetRandomCharacter(charType);
    }
    return word;
}

string GenerateKey() {
    return GenerateWord(enCharType::CapitalLetter, 4) + "-" +
           GenerateWord(enCharType::CapitalLetter, 4) + "-" +
           GenerateWord(enCharType::CapitalLetter, 4) + "-" +
           GenerateWord(enCharType::CapitalLetter, 4);
}

void GenerateKeys(short numberOfKeys) {
    for (int i = 1; i <= numberOfKeys; i++) {
        cout << "Key [" << i << "] : " << GenerateKey() << endl;
    }
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    GenerateKeys(static_cast<short>(ReadPositiveNumber("Please enter how many keys to generate: ")));
    return 0;
}
