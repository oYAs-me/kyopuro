#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    std::vector<int> ball;

    int n;
    cin >> n;

    double a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ball.push_back(pow(2.0, a));
        // 途中だよん
        // https://atcoder.jp/contests/abc351/editorial/9886
        // いかに問題を単純化してとらえるかが大変だな
    }

}