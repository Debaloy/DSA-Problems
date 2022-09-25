#include <iostream>
using std::cout;

int main() {
    int arr[] = {10, -9, 20, 11, 100, 210, 49, -3};
    int len = sizeof(arr)/sizeof(arr[0]);

    int min, max;
    min = max = arr[0];

    for (int i = 0; i < len; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    cout << "Max: " << max << "\nMin: " << min;
    return 0;
}

// Time complexity: O(n)  [n = size of array]