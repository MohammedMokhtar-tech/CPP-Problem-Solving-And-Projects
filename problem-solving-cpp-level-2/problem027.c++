/*
 * Problem: Average of Array Elements
 * Description: Generates an array of random numbers and calculates their average.
 * Input: Number of elements to generate.
 * Output: The random array and the calculated average of its elements.
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

float CalculateArrayAverage(int arrayElements[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arrayElements[i];
    }
    return static_cast<float>(sum) / length;
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int arrayElements[100];
    int length;
    
    FillArrayWithRandomNumbers(arrayElements, length);
    
    cout << "Array elements: ";
    PrintArray(arrayElements, length);
    
    cout << "\nAverage of array elements is: " << CalculateArrayAverage(arrayElements, length) << endl;
    
    return 0;
}
