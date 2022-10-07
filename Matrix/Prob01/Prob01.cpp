#include <iostream>
using std::cout;

const int ROWS = 4;
const int COLS = 4;

void print_spiral(int arr[ROWS][COLS]) {
    int k = 0, l = 0;
    int LAST_ROW = ROWS - 1, LAST_COL = COLS - 1;

    while (k <= LAST_ROW && l <= LAST_COL) {
        // Print the first row
        for (int i = l; i <= LAST_COL; i++)
            cout << arr[k][i] << ", ";
        k++;

        // Print the last col
        for (int i = k; i <= LAST_ROW; i++)
            cout << arr[i][LAST_COL] << ", ";
        LAST_COL--;

        // Print the last row
        if (k <= LAST_ROW) {
            for (int i = LAST_COL; i >= l; i--)
                cout << arr[LAST_ROW][i] << ", ";
            LAST_ROW--;
        }

        // Print the first col
        if (l <= LAST_COL) {
            for (int i = LAST_ROW; i >= k; i--)
                cout << arr[i][l] << ", ";
            l++;
        }
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15,16}
    };

    print_spiral(arr);
    return 0;
}