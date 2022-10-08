#include <iostream>
const int n = 3, m = 3;
using std::cout;

void find_element(int arr[n][m], int key) {
    bool flag = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (arr[i][j] == key) {
                cout << "\nElement found at i: " << i << " and j: " << j;
                flag = true;
            }
    if (!flag)
        cout << "\nElement not found";
}

int main() {
    int arr[n][m] = {
        { 3, 2, 6 },
        { 4, 5, 6 },
        { 7, 8, 5 }
    };

    int key = 5;

    find_element(arr, key);
    
    return 0;
}