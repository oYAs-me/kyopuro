#include<bits/stdc++.h>
using namespace std;

// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(vector<vector<int>> &kuku, int &wrong_count, int &correct_count) {
    // 呼び出し側のAの各マスを正しい値に修正する
    int ans;
    for (int i=0;i<9;i++) {
        for (int j=0;j<9;j++){
            ans = (i+1)*(j+1);
            if (ans==kuku[i][j]) correct_count++;
            else {kuku[i][j]=ans; wrong_count++;}
        }
    }
    // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
    // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる

    // ここにプログラムを追記
}

int main() {
    vector<vector<int>> kuku(9,vector<int>(9));

    for (int i=0;i<9;i++) {
        for (int j=0;j<9;j++) {
            cin>>kuku[i][j];
        }
    }

    int wrong_count=0;
    int correct_count=0;
    saiten(kuku, wrong_count, correct_count);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << kuku[i][j];
            if (j < 8) cout << " ";
            else cout << endl;
        }
    }
    // 正しいマスの個数を出力
    cout << correct_count << endl;
    // 誤っているマスの個数を出力
    cout << wrong_count << endl;

}