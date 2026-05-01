/*
 * Problem: Copy Prime Numbers to New Array
 * Description: Generates an array of random numbers and copies only prime numbers into a new array.
 * Input: Number of elements for the random array.
 * Output: The original random array and the new array containing only prime numbers.
 */
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int number) {
    int m = round(sqrt(number));
    if (number < 2) return enPrimNotPrime::NotPrime;
    for (int counter = 2; counter <= m; counter++) {
        if (number % counter == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}

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

void CopyOnlyPrimeNumbers(int sourceArray[], int destinationArray[], int sourceLength, int &destinationLength) {
    int counter = 0;
    for (int i = 0; i < sourceLength; i++) {
        if (CheckPrime(sourceArray[i]) == enPrimNotPrime::Prime) {
            destinationArray[counter] = sourceArray[i];
            counter++;
        }
    }
    destinationLength = counter;
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int originalArray[100];
    int primeArray[100];
    int originalLength, primeLength = 0;
    
    FillArrayWithRandomNumbers(originalArray, originalLength);
    
    CopyOnlyPrimeNumbers(originalArray, primeArray, originalLength, primeLength);
    
    cout << "\nOriginal array elements:" << endl;
    PrintArray(originalArray, originalLength);
    
    cout << "\nPrime numbers in new array:" << endl;
    PrintArray(primeArray, primeLength);
    
    return 0;
}
