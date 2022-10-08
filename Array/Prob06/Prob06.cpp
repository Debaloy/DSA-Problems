#include <iostream>
#include <map>
using std::cout;
using std::map;

int max(int a, int b) { return a >= b ? a : b; }

int main() {
    int a1[] = { 2, 5, 9, 23 };
    int a2[] = { 1, 2, 9, 18, 32 };

    int len1 = sizeof(a1)/sizeof(a1[0]);
    int len2 = sizeof(a2)/sizeof(a2[0]);

    // -------------------- UNION CODE START --------------------

    map<int, int> unionMap;
    for (int i = 0; i < len1; i++)
        unionMap.insert({ {a1[i], i} });
    for (int i = 0; i < len2; i++)
        unionMap.insert({ {a2[i], i} });
    
    map<int, int> :: iterator iter;
    cout << "\nUnion: ";
    for (iter = unionMap.begin(); iter != unionMap.end(); iter++)
        cout << (*iter).first << ", ";

    // Time complexity: O(n+m) = O(n)  [iterate through the two arrays of size n and m]
    // -------------------- UNION  CODE  END --------------------
    

    // -------------------- INTERSECTION CODE START --------------------

    cout << "\nIntersection: ";

    int i = 0, j = 0;
    while (i < len1 && j < len2) {
        if (a1[i] > a2[j])  j++;
        else if (a1[i] < a2[j]) i++;
        else {
            cout << a1[i] << ", ";
            i++, j++;
        }
    }

    // Time complexity: O(n+m) = O(n)
    // -------------------- INTERSECTION  CODE  END --------------------
    return 0;
}
