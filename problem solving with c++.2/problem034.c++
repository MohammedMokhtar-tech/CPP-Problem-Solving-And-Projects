/*
 * Problem Name: Search Number Position
 * Description: Fills an array with random numbers and searches for a specific number to find its position.
 * Input: Number of array elements and the target number to search for.
 * Output: Position of the number in the array, or a "not found" message.
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

short FindNumberPositionInArray(int number, int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == number)
            return i;
    }
    return -1;
}

int ReadNumber() {
    int number;
    cout << "\nPlease enter a number to search for: ";
    cin >> number;
    return number;
}

int main() {
    srand((unsigned)time(NULL));
    
    int arr[100];
    int length;
    FillArrayWithRandomNumbers(arr, length);
    
    cout << "\nArray elements:" << endl;
    PrintArray(arr, length);
    
    int targetNumber = ReadNumber();
    cout << "\nNumber you are looking for is: " << targetNumber << endl;
    
    short position = FindNumberPositionInArray(targetNumber, arr, length);
    
    if (position == -1) {
        cout << "The number is not found." << endl;
    } else {
        cout << "The number found at position: " << position << endl;
        cout << "The number found at order: " << position + 1 << endl;
    }
    
    return 0;
}
