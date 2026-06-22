/*
  Problem Name: Random Number Generator
  Description: This program generates and prints random numbers within specified ranges.
  Input: Two integers representing the start (from) and end (to) of the range.
  Output: Random integers within the given ranges.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getRandomNumber(int from, int to) {
    // Generate a random number between from and to
    int randomNum = rand() % (to - from + 1) + from;
    return randomNum;
}

int main() {
    // Seeds the random number generator
    srand((unsigned)time(NULL));

    cout << getRandomNumber(10, 20) << endl;
    cout << getRandomNumber(0, 5) << endl;

    return 0;
}
