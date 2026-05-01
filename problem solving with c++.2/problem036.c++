/*
 * Problem Name: Fill Dynamic Array
 * Description: Allows the user to dynamically add numbers to an array and then prints the array.
 * Input: User-entered numbers and a continue decision.
 * Output: Prints all numbers added to the array.
 */

#include <iostream>

using namespace std;

enum AskUser { No = 0, Yes = 1 };

int ReadNumber() {
    int number;
    cout << "\nPlease enter a number: ";
    cin >> number;
    return number;
}

bool AskToContinue() {
    int choice;
    cout << "Do you want to add more numbers? [0]:No, [1]:Yes: ";
    cin >> choice;
    return (choice == AskUser::Yes);
}

void FillNumberArray(int arr[100], int &length) {
    int counter = 0;
    bool addMore = true;
    while (addMore) {
        arr[counter] = ReadNumber();
        counter++;
        addMore = AskToContinue();
    }
    length = counter;
}

void PrintNumberArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int length = 0;
    
    FillNumberArray(arr, length);
    cout << "\nArray elements:" << endl;
    PrintNumberArray(arr, length);
    
    return 0;
}
