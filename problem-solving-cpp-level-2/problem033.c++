/*
 * Problem Name: Generate Random Keys
 * Description: Generates a specified number of random keys, where each key consists of four segments of 4 uppercase letters, separated by hyphens.
 * Input: Number of keys to generate.
 * Output: Prints the generated keys.
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

enum CharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int GetRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

char GetRandomCharacter(CharType charType) {
    switch (charType) {
        case SmallLetter: return char(GetRandomNumber(97, 122));
        case CapitalLetter: return char(GetRandomNumber(65, 90));
        case SpecialCharacter: return char(GetRandomNumber(33, 47));
        case Digit: return char(GetRandomNumber(48, 57));
        default: return '\0';
    }
}

int ReadPositiveNumber(string message) {
    int number;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

string GenerateWord(CharType charType, short length) {
    string word = "";
    for (int i = 0; i < length; i++) {
        word += GetRandomCharacter(charType);
    }
    return word;
}

string GenerateKey() {
    return GenerateWord(CapitalLetter, 4) + "-" +
           GenerateWord(CapitalLetter, 4) + "-" +
           GenerateWord(CapitalLetter, 4) + "-" +
           GenerateWord(CapitalLetter, 4);
}

void FillKeysInArray(int length, string arr[100]) {
    for (int i = 0; i < length; i++) {
        arr[i] = GenerateKey();
    }
}

void PrintArray(string arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << "Array[" << i << "] : " << arr[i] << endl << endl;
    }
}

int main() {
    srand((unsigned)time(NULL));
    string arr[100];
    int length = ReadPositiveNumber("Please enter how many keys to generate: ");
    
    FillKeysInArray(length, arr);
    PrintArray(arr, length);
    
    return 0;
}
