/*
 * Problem Name: Count Positive Numbers in Array
 * Description: Fill an array with random numbers and count how many positive numbers are present.
 * Input: Number of elements for the array, followed by randomized values.
 * Output: Print the array elements and the count of positive numbers.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int GetRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = GetRandomNumber(-100, 100);
}

bool IsPositive(int number) {
    return number >= 0;
}

int CountPositiveNumbersInArray(int arr[100], int length) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (IsPositive(arr[i]))
            counter++;
    }
    return counter;
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100];
    int length = 0;
    
    FillArrayWithRandomNumbers(arr, length);
    
    cout << "\nArray Elements:\n";
    PrintArray(arr, length);
    
    cout << "\nPositive Number Count:\n";
    cout << CountPositiveNumbersInArray(arr, length) << endl;
    
    return 0;
}
