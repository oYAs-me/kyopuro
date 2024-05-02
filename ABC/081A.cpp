#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0;
    if (s[0] == '1') {
        i++;
    }
    if (s[1] == '1') {
        i++;
    }
    if (s[2] == '1') {
        i++;
    }
    cout << i << endl;
}