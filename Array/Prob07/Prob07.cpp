#include <iostream>
using std::cout;

void rotate(int arr[], int n) {
    int res[100000];

    for (int i = n - 1, j = 0; i < n * 2 - 1, j < n; i++, j++)
        res[j] = arr[i % n];
    
    for (int i = 0; i < n; i++)
        arr[i] = res[i];
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);

    rotate(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i];
    
    return 0;    
}

// Time complexity: O(2n)