/*
 * Problem Name: Reverse Array Copy
 * Description: Fills an array with random numbers and copies it in reverse order to another array.
 * Input: Number of elements for the array.
 * Output: Prints both the original and reversed array.
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int GetRandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillArrayWithRandomNumbers(int arr[100], int &length) {
    cout << "Enter number of elements: ";
    cin >> length;
    for (int i = 0; i < length; i++)
        arr[i] = GetRandomNumber(1, 100);
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void CopyArrayInReverseOrder(int sourceArr[100], int destinationArr[100], int length) {
    for (int i = 0; i < length; i++)
        destinationArr[i] = sourceArr[length - 1 - i];
}

int main() {
    srand((unsigned)time(NULL));
    
    int sourceArr[100];
    int length;
    FillArrayWithRandomNumbers(sourceArr, length);
    
    int destinationArr[100];
    CopyArrayInReverseOrder(sourceArr, destinationArr, length);
    
    cout << "\nOriginal array elements:" << endl;
    PrintArray(sourceArr, length);
    
    cout << "\nReversed array elements:" << endl;
    PrintArray(destinationArr, length);
    
    return 0;
}
