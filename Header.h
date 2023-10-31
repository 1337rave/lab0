#ifndef HEADER_H
#define HEADER_H

#include <vector>

using namespace std;

template <typename T>
void FindMinMax(const std::vector<T>& arr, T& minValue, int& minIndex, T& maxValue, int& maxIndex) {
    if (arr.empty()) {
        minValue = maxValue = T(); 
        minIndex = maxIndex = -1;
        return;
    }

    minValue = arr[0];
    maxValue = arr[0];
    minIndex = maxIndex = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        else if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
}
template <typename T>
void ReverseArray(vector<T>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
template <typename T>
bool IsPrime(T n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (T i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}
template <typename T>
int CountPrimes(const vector<T>& arr) {
    int count = 0;
    for (const T& element : arr) {
        if (IsPrime(element)) {
            count++;
        }
    }
    return count;
}

#endif


