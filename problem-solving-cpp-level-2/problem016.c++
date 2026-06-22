/*
  Problem Name: All 3-Letter Combinations
  Description: This program prints all possible 3-letter combinations from AAA to ZZZ.
  Input: None.
  Output: All combinations of three uppercase letters (AAA to ZZZ).
*/

#include <iostream>
#include <string>

using namespace std;

void printAAAtoZZZ() {
    string word = "";
    for (int i = 'A'; i <= 'Z'; i++) {
        for (int j = 'A'; j <= 'Z'; j++) {
            for (int k = 'A'; k <= 'Z'; k++) {
                word = "";
                word += char(i);
                word += char(j);
                word += char(k);
                cout << word << endl;
            }
        }
        cout << "\n";
    }
}

int main() {
    printAAAtoZZZ();
    return 0;
}
