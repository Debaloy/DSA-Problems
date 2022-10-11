#include <iostream>
#define MAX_LEN 100
using std::cout;

void reverse(const char* str, int len) {
    for (int i = len - 1; i >= 0; i--)
        cout << str[i];
}

int main() {
    char* str = new char[MAX_LEN];
    fgets(str, MAX_LEN, stdin);

    int len;
    for (len = 0; str[len] != '\0'; len++);

    reverse(str, len);
    
    return 0;
}