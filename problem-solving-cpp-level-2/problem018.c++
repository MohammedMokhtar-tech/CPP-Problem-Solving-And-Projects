/*
  Problem Name: Text Encryption/Decryption
  Description: This program demonstrates a simple encryption and decryption technique
               using a Caesar cipher (shifting character ASCII values by a fixed key).
  Input: A string (password or text).
  Output: The original text, the encrypted text, and the decrypted text.
*/

#include <iostream>
#include <string>

using namespace std;

string readText(string message) {
    string text;
    cout << message << ": ";
    getline(cin, text);
    return text;
}

string encryptText(string text, short encryptionKey) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = char((int)text[i] + encryptionKey);
    }
    return text;
}

string decryptText(string text, short encryptionKey) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = char((int)text[i] - encryptionKey);
    }
    return text;
}

int main() {
    const short encryptionKey = 2;
    string originalText = readText("Enter your password");

    string encryptedText = encryptText(originalText, encryptionKey);
    string decryptedText = decryptText(encryptedText, encryptionKey);

    cout << "\nText Before Encryption : " << originalText << endl;
    cout << "Text After Encryption  : " << encryptedText << endl;
    cout << "Text After Decryption  : " << decryptedText << endl;

    return 0;
}
