#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Remove conflicting declaration
    char str[] = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    int n = sizeof(str) / sizeof(str[0]);

    // Reverse the entire string
    reverse(str, str + n);

    // Reverse each word in the string
    int start = 0;
    for (int end = 0; end < n; end++) {
        if (str[end] == ' ') {
            reverse(str + start, str + end);
            start = end + 1;
        }
    }
    // Reverse the last word
    reverse(str + start, str + n);

    // Output the reversed string
    cout << str << endl;

    return 0;
}
