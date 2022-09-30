#include <iostream>
using std::cout;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = { 12, 3, -2, 9, -5, -3, 7 };
    int len = sizeof(arr) / sizeof(arr[0]);

    int swapPointer = 0;
    int finderPonter = 0;

    for (int i = 0; i < len; i++) {
        if (arr[i] >= 0) finderPonter++;
        else {
            for (int j = i; j > swapPointer; j--)
                swap(arr[j], arr[j - 1]);
            swapPointer++;
        }
    }

    for (int i = 0; i < len; i++)
        cout << arr[i] << '\t';
    
    return 0;
}


// Thought Process:
/*

12 3 -2 9 -5 -3 7
s     f

12 -2 3 9 -5 -3 7
s   f

-2 12 3 9 -5 -3 7
   sf

-2 12 3 9 -5 -3 7
    s      f

-2 12 3 -5 9 -3 7
    s    f

-2 12 -5 3 9 -3 7
    s  f

-2 -5 12 3 9 -3 7
   sf

-2 -5 12 3 9 -3 7
      sf

-2 -5 12 3 9 -3 7
       s      f

-2 -5 12 3 -3 9 7
       s    f

-2 -5 12 -3 3 9 7
       s  f

-2 -5 -3 12 3 9 7
      sf

-2 -5 -3 12 3 9 7
      s         f
end

*/