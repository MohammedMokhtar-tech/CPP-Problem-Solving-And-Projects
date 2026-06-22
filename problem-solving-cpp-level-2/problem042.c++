/*
 * Problem Name: Count Odd Numbers in Array
 * Description: Fill an array with random numbers and count how many odd numbers are present.
 * Input: Number of elements for the array, followed by randomized values.
 * Output: Print the array elements and the count of odd numbers.
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
        arr[i] = GetRandomNumber(1, 100);
}

bool IsOdd(int number) {
    return number % 2 != 0;
}

int CountOddNumbersInArray(int arr[100], int length) {
    int counter = 0;
    for (int i = 0; i < length; i++) {
        if (IsOdd(arr[i]))
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
    
    cout << "\nOdd Number Count:\n";
    cout << CountOddNumbersInArray(arr, length) << endl;
    
    return 0;
}
