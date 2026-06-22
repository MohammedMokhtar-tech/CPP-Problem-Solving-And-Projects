/*
 * Problem Name: Copy Array
 * Description: Fills an array with random numbers and copies it to a second array.
 * Input: Number of array elements.
 * Output: Prints both the source array and the copied array.
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

void AddArrayElement(int number, int arr[100], int &length) {
    length++;
    arr[length - 1] = number;
}

void CopyArray(int sourceArr[100], int destinationArr[100], int sourceLength, int &destinationLength) {
    for (int i = 0; i < sourceLength; i++) {
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
    CopyArray(sourceArr, destinationArr, sourceLength, destinationLength);
    
    cout << "\nArray 1 elements:" << endl;
    PrintNumberArray(sourceArr, sourceLength);
    
    cout << "\nArray 2 elements after copy:" << endl;
    PrintNumberArray(destinationArr, destinationLength);
    
    return 0;
}
