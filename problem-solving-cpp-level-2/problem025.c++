/*
 * Problem: Find Minimum Number in Array
 * Description: Generates an array of random numbers and finds the minimum value.
 * Input: Number of elements to generate.
 * Output: The random array and the minimum value found.
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

int FindMinNumber(int arrayElements[], int length) {
    int minNumber = arrayElements[0];
    for (int i = 1; i < length; i++) {
        if (arrayElements[i] < minNumber) {
            minNumber = arrayElements[i];
        }
    }
    return minNumber;
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int arrayElements[100];
    int length;
    
    FillArrayWithRandomNumbers(arrayElements, length);
    
    cout << "Array elements: ";
    PrintArray(arrayElements, length);
    
    cout << "\nMin Number is: " << FindMinNumber(arrayElements, length) << endl;
    
    return 0;
}
