/*
 * Problem: Sum of Two Arrays
 * Description: Generates two arrays of random numbers and creates a third array where each element is the sum of corresponding elements from the first two.
 * Input: Number of elements for the arrays.
 * Output: Two random arrays and their element-wise sum array.
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

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

void SumTwoArrays(int array1[], int array2[], int resultArray[], int length) {
    for (int i = 0; i < length; i++) {
        resultArray[i] = array1[i] + array2[i];
    }
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int array1[100], array2[100], resultArray[100];
    int length;
    
    FillArrayWithRandomNumbers(array1, length);
    cout << "Array 1 elements: ";
    PrintArray(array1, length);
    
    FillArrayWithRandomNumbers(array2, length);
    cout << "Array 2 elements: ";
    PrintArray(array2, length);
    
    SumTwoArrays(array1, array2, resultArray, length);
    cout << "\nSum of the two arrays: ";
    PrintArray(resultArray, length);
    
    return 0;
}
