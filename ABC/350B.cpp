#include <bits/stdc++.h>
#include <vector>
using namespace std;

// for(int i = 0; i < n; i++)
#define rep(i, n) for(int i=0;i<(int)(n);i++)
// for(int i = init; i < n; i++)
#define rep_s(i, init, n) for(int i=(int)(init);i<(int)(n);i++)

int main() {
    int n,q;
    cin>>n>>q;
    vector<bool> vec(n, true);
    int t;
    rep(i,q){
        cin>>t;
        if(vec[t-1]) vec[t-1]=false;
        else vec[t-1]=true;
    }
    int teeth=0;
    for(bool b:vec) {
        if(b) teeth++;
    }
    cout<<teeth<<endl;
}