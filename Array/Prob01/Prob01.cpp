#include <iostream>
using std::cout;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr)/sizeof(arr[0]);

    int res[len];
    int index = 0;

    for(int i = len - 1; i >= 0; i--)
        res[index++] = arr[i];

    for(int i = 0; i < len; i++)
        cout << res[i] << "\t";

    return 0;
}

// Time complexity: O(n)   [n = size of the array]
