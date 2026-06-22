/*
  Problem Name: 3-Letter Password Guesser (Bruteforce)
  Description: This program reads a 3-letter uppercase password and attempts to guess it 
               by trying all combinations from AAA to ZZZ.
  Input: A 3-letter uppercase string.
  Output: Each trial and the number of trials taken to find the password.
*/

#include <iostream>
#include <string>

using namespace std;

string readPassword() {
    string password;
    cout << "Please enter a 3-Letter Password (all capital)?\n";
    cin >> password;
    return password;
}

// Version 1: Guess and print every trial
bool guessPassword(string originalPassword) {
    string word = "";
    int counter = 0;
    cout << "\n";
    for (int i = 'A'; i <= 'Z'; i++) {
        for (int j = 'A'; j <= 'Z'; j++) {
            for (int k = 'A'; k <= 'Z'; k++) {
                word = "";
                word += char(i);
                word += char(j);
                word += char(k);
                counter++;
                cout << "Trial [" << counter << "] : " << word << endl;

                if (word == originalPassword) {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Found after " << counter << " Trial(s)\n";
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    guessPassword(readPassword());
    return 0;
}

/*
// Version 2: Optimized (Only prints the result)
void checkPassword(string password) {
    int counter = 0;
    string word = "";
    for (int i = 'A'; i <= 'Z'; i++) {
        for (int j = 'A'; j <= 'Z'; j++) {
            for (int k = 'A'; k <= 'Z'; k++) {
                word = "";
                word += char(i);
                word += char(j);
                word += char(k);
                counter++;
                if (password == word) {
                    cout << "Password is " << password << endl;
                    cout << "Found After " << counter << " trials" << endl;
                    return;
                }
            }
        }
    }
}
*/
