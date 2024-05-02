#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    // ここは自分で書いたやつ
    for (int i=0;i<4;i++){
        if(data[i]==data[i+1]){
            cout<<"YES"<<endl;
            return 0; // main()でreturnできる（）
        }
    }
    cout<<"NO"<<endl;

    // ここは解答例をコピーしたやつ
    // bool ans = false;  // 始めはfalseにしておき、条件を満たすときにtrueになるようにする

    // for (int i = 0; i < 4; i++) {
    //     if (data.at(i) == data.at(i + 1)) {
    //         ans = true;
    //     }
    // }

    // if (ans) {
    //     cout << "YES" << endl;
    // }
    // else {
    //     cout << "NO" << endl;
    // }
}