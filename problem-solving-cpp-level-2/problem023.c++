/*
 * Problem: Fill Array with Random Numbers
 * Description: Generates an array filled with random integers.
 * Input: Number of elements for the array.
 * Output: The array filled with random numbers between 1 and 100.
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

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int arrayElements[100];
    int length;
    
    FillArrayWithRandomNumbers(arrayElements, length);
    
    cout << "Array elements: ";
    PrintArray(arrayElements, length);
    
    return 0;
}
