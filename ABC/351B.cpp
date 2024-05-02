#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string in;
    vector<vector<char>> a(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        cin >> in;
        for (int j = 0; j < n; j++) {
            a.at(i).at(j) = in[j];

        }
    }
    char b;
    for (int i = 0; i < n; i++) {
        cin >> in;
        for (int j = 0; j < n; j++) {
            if (a.at(i).at(j) != in[j]){
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
}