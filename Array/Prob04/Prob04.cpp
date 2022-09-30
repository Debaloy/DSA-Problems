#include <iostream>
using std::cout;

int main() {
    int arr[] = { 0, 1, 0, 2, 1, 0, 2, 1, 0, 2 };
    int len = sizeof(arr)/sizeof(arr[0]);

    int zero, one, two;
    zero = one = two = 0;

    for (int i = 0; i < len; i++)
        arr[i] == 0 ? zero++ : arr[i] == 1 ? one++ : two++;
    
    for (int i = 0; i < len; i++) {
        if (zero) {
            zero--;
            arr[i] = 0;
        } else if (one) {
            one--;
            arr[i] = 1;
        } else if (two) {
            two--;
            arr[i] = 2;
        }
    }

    for (int i = 0; i < len; i++)
        cout << arr[i] << '\t';
    return 0;
}

// Time Complexity: )(n)