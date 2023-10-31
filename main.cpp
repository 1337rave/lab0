#include <iostream>
#include "header.h"

using namespace std;    

int main() {
    vector<int> intArray = { 3, 5, 7, 12, 13, 17, 22 };
    int minVal, minIdx, maxVal, maxIdx;

    FindMinMax(intArray, minVal, minIdx, maxVal, maxIdx);
    cout << "Minimum value: " << minVal << " at index: " << minIdx << endl;
    cout << "Maximum value: " << maxVal << " at index: " << maxIdx << endl;

    ReverseArray(intArray);
    cout << "Reversed Array: ";
    for (int num : intArray) {
        cout << num << " ";
    }
    cout << endl;

    int primeCount = CountPrimes(intArray);
    cout << "Number of prime numbers in the array: " << primeCount << endl;

    return 0;
}
