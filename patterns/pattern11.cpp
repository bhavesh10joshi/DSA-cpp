#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;        // Example: 4
    char end = 'A' + n - 1; // 'D' if n=4

    for (int i = 0; i < n; i++) {
        char ch = end - i;  // Starting character of this row
        for (int j = 0; j <= i; j++) {
            cout << ch++ << " ";
        }
        cout << endl;
    }

    return 0;
}
