/*
 * Problem: Count Frequency of Number in Array
 * Description: Reads an array of numbers and counts how many times a specific number appears.
 * Input: Number of elements, the elements, and the target number to check.
 * Output: The frequency of the target number in the array.
 */
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

void ReadArray(int arrayElements[], int &length) {
    cout << "Enter number of elements:" << endl;
    cin >> length;
    cout << "Enter your array elements:" << endl;
    for (int i = 0; i < length; i++) {
        cout << "Enter number [" << i + 1 << "]: ";
        cin >> arrayElements[i];
    }
}

void PrintArray(int arrayElements[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arrayElements[i] << " ";
    }
    cout << endl;
}

int CountFrequency(int targetNumber, int arrayElements[], int length) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (targetNumber == arrayElements[i]) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int arrayElements[100];
    int length;
    ReadArray(arrayElements, length);
    int targetNumber = ReadPositiveNumber("Enter a positive number to check:");
    
    cout << "\nOriginal array: ";
    PrintArray(arrayElements, length);
    
    cout << "\nNumber " << targetNumber << " is repeated " 
         << CountFrequency(targetNumber, arrayElements, length) << " time(s)." << endl;
    
    return 0;
}
