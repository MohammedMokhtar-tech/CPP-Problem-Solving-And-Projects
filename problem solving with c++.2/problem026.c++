/*
 * Problem: Sum of Array Elements
 * Description: Generates an array of random numbers and calculates their sum.
 * Input: Number of elements to generate.
 * Output: The random array and the calculated sum of its elements.
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

int SumArrayElements(int arrayElements[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arrayElements[i];
    }
    return sum;
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int arrayElements[100];
    int length;
    
    FillArrayWithRandomNumbers(arrayElements, length);
    
    cout << "Array elements: ";
    PrintArray(arrayElements, length);
    
    cout << "\nSum of Array elements is: " << SumArrayElements(arrayElements, length) << endl;
    
    return 0;
}
