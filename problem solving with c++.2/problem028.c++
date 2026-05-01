/*
 * Problem: Copy Array
 * Description: Generates an array of random numbers and copies its content into another array.
 * Input: Number of elements to generate.
 * Output: The original random array and its copy.
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GetRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arrayElements[], int &length) {
    cout << "Enter number of elements:" << endl;
    cin >> length;
    for (int i = 0; i < length; i++) {
        arrayElements[i] = GetRandomNumber(1, 100);
    }
}

void PrintArray(int arrayElements[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arrayElements[i] << " ";
    }
    cout << endl;
}

void CopyArray(int sourceArray[], int destinationArray[], int length) {
    for (int i = 0; i < length; i++) {
        destinationArray[i] = sourceArray[i];
    }
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int originalArray[100];
    int copiedArray[100];
    int length;
    
    FillArrayWithRandomNumbers(originalArray, length);
    
    cout << "Original array elements: ";
    PrintArray(originalArray, length);
    
    CopyArray(originalArray, copiedArray, length);
    
    cout << "\nCopied array elements: ";
    PrintArray(copiedArray, length);
    
    return 0;
}
