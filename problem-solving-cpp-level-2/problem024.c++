/*
 * Problem: Find Maximum Number in Array
 * Description: Generates an array of random numbers and finds the maximum value.
 * Input: Number of elements to generate.
 * Output: The random array and the maximum value found.
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

int FindMaxNumber(int arrayElements[], int length) {
    int maxNumber = arrayElements[0];
    for (int i = 1; i < length; i++) {
        if (arrayElements[i] > maxNumber) {
            maxNumber = arrayElements[i];
        }
    }
    return maxNumber;
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int arrayElements[100];
    int length;
    
    FillArrayWithRandomNumbers(arrayElements, length);
    
    cout << "Array elements: ";
    PrintArray(arrayElements, length);
    
    cout << "\nMax Number is: " << FindMaxNumber(arrayElements, length) << endl;
    
    return 0;
}
