#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec(N); // vector<型名> n(要素数, 初期値);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    // int flag = 0;
    // int a;
    // int divide = -1;
    // while (flag == 0) {
    //     divide++;
    //     for(int i = 0; i < N; i++) {
    //         if (vec[i] % 2 == 0) {
    //             vec[i] /= 2;
    //         } else {
    //             flag = 1;
    //             break;
    //         }
    //     }
    // }
    int ans = 0;  // 操作を行った回数
    while (true) {  // 無限ループ
        for (int i = 0; i < N; i++) {  // 配列の要素を走査
            if (vec[i] % 2 == 1) {  // 奇数の場合  vec[i]%2!=0でもいい
                cout << ans << endl;  // 操作を行った回数を出力
                return 0;  // main関数を抜ける
            }
            vec[i] /= 2;   // 偶数の場合、2で割る
        }
        ans++;   // 操作を行った回数を1増やす
    }
    // cout << divide << endl;
}