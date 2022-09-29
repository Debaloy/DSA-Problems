#include <iostream>
using std::cout;
using std::cin;

void merge(int* arr, int l, int mid, int u) {
    int i = l;
    int j = mid + 1;
    int k = 0;
    int temp[sizeof(arr) + 1];

    while (i <= mid && j <= u) {
        if (arr[i] < arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= u)   temp[k++] = arr[j++];

    for (int i = l, k = 0; i <= u; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(int* arr, int l, int u) {
    if (l != u) {
        int mid = (l + u) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, u);
        merge(arr, l, mid, u);
    }
}

int main() {
    int n;
    do {
        cout << "\n Enter how many elements to enter in array (<100): ";
        cin >> n;
    } while(n < 1 || n > 100);

    cout << "\n Enter " << n << " elements: ";

    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    int len = n;

    do {
        cout << "\n 1) Find n-th highest";
        cout << "\n 2) Find n-th lowest";
        cout << "\n Choice: ";
        cin >> n;

        switch(n) {
            case 1: {
                cout << "\n Enter value of n: ";
                cin >> n;
                cout << "\n Answer: " << arr[len - n];
            } break;

            case 2: {
                cout << "\n Enter value of n: ";
                cin >> n;
                cout << "\n Answer: " << arr[n - 1];
            } break;

            default: break;
        }

        cout << "\n Keep on going? (1/0): ";
        cin >> n;
    } while(n != 0); 
    
    return 0;
}