/*
 * Problem Name: Palindrome Array
 * Description: Check if an array is a palindrome (reads the same forward and backward).
 * Input: An array of integers (predefined in FillArray function).
 * Output: Print the original array and a message indicating if it is a palindrome.
 */

#include <iostream>
using namespace std;

void FillArray(int arr[100], int &arrLength) {
    arrLength = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}

bool IsPalindromeArray(int arr[100], int length) {
    for (int i = 0; i < length / 2; i++) {
        if (arr[i] != arr[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

void PrintArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int length = 0;
    FillArray(arr, length);

    cout << "\nArray Elements:\n";
    PrintArray(arr, length);

    if (IsPalindromeArray(arr, length))
        cout << "\nYes, the array is a Palindrome.\n";
    else
        cout << "\nNo, the array is NOT a Palindrome.\n";

    return 0;
}
