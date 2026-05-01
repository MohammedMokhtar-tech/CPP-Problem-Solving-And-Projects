/*
 * Problem Name: Search Number Existence
 * Description: Fills an array with random numbers and checks if a specific number exists in the array.
 * Input: Number of array elements and the target number.
 * Output: Message indicating whether the number was found.
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int ReadNumber() {
    int number;
    cout << "\nPlease enter a number to search for: ";
    cin >> number;
    return number;
}

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

bool IsNumberInArray(int number, int arr[100], int length) {
    return FindNumberPositionInArray(number, arr, length) != -1;
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
    
    if (!IsNumberInArray(targetNumber, arr, length))
        cout << "The number is not found." << endl;
    else
        cout << "Yes, it is found!" << endl;
    
    return 0;
}
