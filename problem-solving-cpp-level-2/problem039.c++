/*
 * Problem Name: Copy Prime Numbers
 * Description: Fills an array with random numbers and copies only the prime numbers to a second array.
 * Input: Number of array elements.
 * Output: Prints both the original array and the array containing only prime numbers.
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

enum PrimeStatus { Prime = 1, NotPrime = 2 };

int GetRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int &length) {
    cout << "Enter number of elements: ";
    cin >> length;
    for (int i = 0; i < length; i++)
        arr[i] = GetRandomNumber(1, 100);
}

void AddArrayElement(int number, int arr[100], int &length) {
    length++;
    arr[length - 1] = number;
}

PrimeStatus CheckPrime(int number) {
    int limit = round(number / 2);
    for (int i = 2; i <= limit; i++) {
        if (number % i == 0)
            return NotPrime;
    }
    return Prime;
}

void CopyPrimeNumbers(int sourceArr[100], int destinationArr[100], int sourceLength, int &destinationLength) {
    for (int i = 0; i < sourceLength; i++) {
        if (CheckPrime(sourceArr[i]) == Prime)
            AddArrayElement(sourceArr[i], destinationArr, destinationLength);
    }
}

void PrintNumberArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));
    
    int sourceArr[100];
    int sourceLength = 0;
    FillArrayWithRandomNumbers(sourceArr, sourceLength);
    
    int destinationArr[100];
    int destinationLength = 0;
    CopyPrimeNumbers(sourceArr, destinationArr, sourceLength, destinationLength);
    
    cout << "\nArray 1 elements:" << endl;
    PrintNumberArray(sourceArr, sourceLength);
    
    cout << "\nArray 2 elements (prime numbers only):" << endl;
    PrintNumberArray(destinationArr, destinationLength);
    
    return 0;
}
