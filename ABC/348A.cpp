#include <bits/stdc++.h>
#include <vector>
using namespace std;

// for(int i = 0; i < n; i++)
#define rep(i, n) for(int i=0;i<(int)(n);i++)
// for(int i = init; i < n; i++)
#define rep_s(i, init, n) for(int i=(int)(init);i<(int)(n);i++)

int main() {
    int n;
    cin>>n;
    rep(i,n){
        if((i+1)%3==0) cout<<'x';
        else cout<<'o';
    }
    cout<<endl;
}