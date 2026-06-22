/*
 * Problem Name: Shuffle Array
 * Description: Generates an array with numbers from 1 up to a user-provided length, then shuffles the array.
 * Input: Positive integer for the array length.
 * Output: Prints the array before and after shuffling.
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int ReadPositiveNumber(string message) {
    int number;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

void FillNumberArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = i + 1;
    }
}

int GetRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void ShuffleArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        swap(arr[GetRandomNumber(0, length - 1)], arr[GetRandomNumber(0, length - 1)]);
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
    int arr[100];
    int length = ReadPositiveNumber("Enter a positive number: ");
    
    FillNumberArray(arr, length);
    
    cout << "Array elements before shuffle:" << endl;
    PrintNumberArray(arr, length);
    
    ShuffleArray(arr, length);
    
    cout << "Array elements after shuffle:" << endl;
    PrintNumberArray(arr, length);
    
    return 0;
}
