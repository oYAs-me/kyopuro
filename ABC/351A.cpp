#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 0, b = 0;
    int j = 0;
    for (int i = 0; i < 9; i++) {
        cin >> j;
        a += j;
        // cout << a << endl;
    }
    // cout << a << endl;
    for (int i = 0; i < 8; i++) {
        cin >> j;
        b += j;
    }
    // cout << b << endl;
    cout << a - b + 1 << endl;
}